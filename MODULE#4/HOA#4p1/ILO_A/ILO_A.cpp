#include <iostream>
#include <stack>

int main(){

    std::stack<int> newStack;

    //testing the empty function if the stack is empty
    std::cout << "Is the stack empty?" << newStack.empty() <<std::endl;

    //insert a 3 elemets:
    newStack.push(3);
    std::cout << "Top of Stack: " << newStack.top() <<std::endl;
    newStack.push(2);
    std::cout << "Top of Stack: " << newStack.top() <<std::endl;
    newStack.push(1);
    std::cout << "Top of Stack: " << newStack.top() <<std::endl;

    std::cout << "Is the stack empty?" << newStack.empty() <<std::endl;

    newStack.push(6);
    newStack.push(7);
    newStack.push(8);

    std::cout << "Size of the Stack is: " << newStack.size() <<std::endl;
    std::cout << "Top of Stack: " << newStack.top() <<std::endl;

    //swap?? -> swap the content of the public member functions

    std::stack<int> otherStack;
    otherStack.push(8);
    otherStack.push(7);
    otherStack.push(6);
    otherStack.push(3);
    otherStack.push(2);
    otherStack.push(1);

    newStack.swap(otherStack);
    std::cout << "Top of Stack: " << newStack.top() <<std::endl;
    std::cout << "Top of Other Stack: " << otherStack.top() <<std::endl;

    //emplace -> construct and insert element -> public member function

    newStack.emplace(9);
    std::cout << "Top of Stack: " << newStack.top() <<std::endl;

    return 0;
}


