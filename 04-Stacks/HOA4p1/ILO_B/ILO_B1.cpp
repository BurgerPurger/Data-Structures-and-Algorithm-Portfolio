#include <iostream>

const size_t maxCap = 100;
int stack[maxCap];
int top = -1, newData, elements;

//prototyping
bool isEmpty();
bool isFull();
void push();
void pop();
void Top();
void displayAll();

int main(){
    int choice;
    //Ask the user for the maximum elements to be inserted
    std::cout<< "Enter the Number of Max Elements for the New Stack (max: 100)";
    std::cin>> elements;

    while(true){
        std::cout<< "Stack Operations: " << std::endl;
        std::cout<<"1. PUSH \n2. POP \n3. Top \n4. isEmpty \n5. isFull \n6. displayAll"<<std::endl;
        std::cin >> choice;

        switch(choice){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: Top();
            break;
            case 4: 
                std::cout << isEmpty() << std::endl;
            break;
            case 5:
                std::cout << isFull() << std::endl;
            break;
            case 6:
                displayAll();
            break;
            default:
                std::cout << "Invalid Choice" << std::endl;
            break;
        }
    }

    return 0;
}

bool isEmpty(){
    // top is -1
    if (top == -1) {
        std::cout << "Stack is Empty\n";
        return true;
    }
    return false;
}

bool isFull(){
    //not equal to the maxCap
    if (top >= elements-1){
        std::cout << "Stack Overflow\n";
        return true;
    }
    return false;
}

void push(){
    //check if the stack is full, if yes return an error
    if(isFull()) return;

    //ask the user for a value to be pushed into the stack
    std::cout << "What Number Do You Want to be Added to the Stack?";
    std::cin >> newData;

    //store inside the stack
    stack[++top] = newData;
}

void pop(){
    //Check if the stack is empty, if yes return an error
    if(isEmpty()) return;

    //Display the element to be popped
    std::cout << "Popping: " << stack[top] <<std::endl;

    //decrement the top
    top--;
}

void Top(){
    //Check if the stack is empty, if yes return an error
    if(isEmpty()) return;

    //Display the top element
    std::cout << "The Top Element is: " << stack[top] << std::endl;
}

void displayAll() {
    // Check if the stack is empty
    if (isEmpty()) return;

    std::cout << "The stack is: \n";

    // Start at top, stop when reaching 0, move downwards
    for (int i = top; i >= 0; i--) {
        std::cout << stack[i] << std::endl;
    }
}


