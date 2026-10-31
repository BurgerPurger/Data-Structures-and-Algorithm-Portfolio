#include <iostream>
#include "ILO_B2_listStack.h"

int main(){

    std::cout << "-------- Pushing 'I' 'E' 'E' 'E' ------\n";

    // Push elements
    push('I');
    push('E');
    push('E');
    push('E');

    display<char>();

    // Display top element
    Top<char>();

    std::cout << "\n-------- Popping 'E' 'E' 'E' 'I' ------\n";

    // Pop until empty
    while(!isEmpty<char>()){
        std::cout << "Popping: " << pop<char>() << std::endl;
    }

    // Test underflow
    pop<char>();

    return 0;
}

