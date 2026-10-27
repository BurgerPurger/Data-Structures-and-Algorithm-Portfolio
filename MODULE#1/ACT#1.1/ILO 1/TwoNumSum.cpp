#include <iostream>

void TwoNumSum(int fNum, int sNum);

int main() {
    TwoNumSum(1,2);
}

void TwoNumSum(int fNum, int sNum){
    std::cout << "The sum of the two numbers is: " << (fNum + sNum) << std::endl;
}
