#include <iostream>

bool logicalOperations(bool boolA, bool boolB);

int main(){
    logicalOperations(true, false);

    return 0;
}

bool logicalOperations(bool boolA, bool boolB){
    std::cout << "A AND B: " << (boolA && boolB) << std::endl;
    std::cout << "A OR B: " << (boolA || boolB) << std::endl;
    std::cout << "A XOR B: " << (boolA ^ boolB) << std::endl;
    std::cout << "A Complement: " << (!boolA) << std::endl;
    std::cout << "B Complement: " << (!boolB) << std::endl;

    return true;
}

