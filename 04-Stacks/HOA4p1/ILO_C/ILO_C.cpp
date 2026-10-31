#include <iostream>
#include <string>

const size_t maxCap = 100;
char stack[maxCap];
int top = -1, elements = maxCap;
char newData;

// Prototypes
bool isEmpty();
bool isFull();
void push(char);
char pop();
char Top();
bool isOpening(char);
bool isClosing(char);
bool isMatching(char, char);
bool checkBalanced(std::string);

int main(){
    std::string expression;

    std::cout << "Enter an expression: ";
    getline(std::cin, expression);

    if(checkBalanced(expression))
        std::cout << "\nThe expression is Balanced.\n";
    else
        std::cout << "\nThe expression is NOT Balanced.\n";

    return 0;
}

bool isEmpty(){
    if(top == -1){
        return true;
    }
    return false;
}

bool isFull(){
    if(top >= elements - 1){ // since top is set to -1
        std::cout << "Stack Overflow\n";
        return true;
    }
    return false;
}

void push(char symbol){
//check if the stack is full, if yes return an error
    if(isFull()) return;
//store inside the stack
    stack[++top] = symbol;
}

char pop(){
//Check if the stack is empty, if yes return an error
    if(isEmpty()){
        return '\0';
    }
//returns the element to be popped for comparing later
    return stack[top--];
}

char Top(){
//Check if the stack is empty, if yes return an error
    if(isEmpty()){
        return '\0';
    }
//Display the top element
    return stack[top];
}

bool isOpening(char ch){
    return ch == '(' || ch == '{' || ch == '[';
}

bool isClosing(char ch){
    return ch == ')' || ch == '}' || ch == ']';
}

bool isMatching(char open, char close){
//returns true if the symbols match, otherwise false
    if(open == '(' && close == ')')
        return true;
    if(open == '{' && close == '}')
        return true;
    if(open == '[' && close == ']')
        return true;
    return false;
}

bool checkBalanced(std::string expression){
    // Reset the stack before checking a new expression
    top = -1;

    // Traverse each character in the expression
    for(char ch : expression){
        //Push to stack if opening symbol
        if(isOpening(ch)){
            push(ch);
        }
        // Now for closing symbols
        else if(isClosing(ch)){
            // If the stack is empty, there is no matching opening symbol
            if(isEmpty()){
                std::cout << "Error: Closing symbol '" << ch << "' has no matching opening symbol.\n";
                return false;
            }
            // Start popping
            char open = pop();
            // Compare the opening and closing symbols
            if(!isMatching(open, ch)){
                std::cout << "Error: '" << open << "' does not match '" << ch << "'.\n";
                return false;
            }
        }
    }

    // Check if there are still opening symbols left in the stack
    if(!isEmpty()){
        std::cout << "Error: There are unmatched opening symbols.\n";
        return false;
    }
    // If no errors were found, the expression is balanced
    return true;
}