#include <iostream>

int fNum = 0, sNum = 0, temp = 0;

int main() {
    std::cout << "Enter First Number: ";
    std::cin >> fNum;
    std::cout << "Enter Second Number: ";
    std::cin >> sNum;

    temp = fNum;
    fNum = sNum;
    sNum = temp;

    std::cout << "\nI swapped your numbers!\n";
    std::cout << "First Number: " << fNum << std::endl;
    std::cout << "Second Number: " << sNum << std::endl;

    return 0;
}
