#include <iostream>

void isGreater(int A, int B);

int main() {
    isGreater(1,2);
}

void isGreater(int A, int B){
    if(A > B){
        std::cout << A << " is greater than: " << B << std::endl;
    }
    else {
        std::cout << A << " is NOT greater than: " << B << std::endl;
    }
}
