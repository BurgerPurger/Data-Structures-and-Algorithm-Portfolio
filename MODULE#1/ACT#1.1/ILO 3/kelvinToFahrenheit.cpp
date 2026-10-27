#include <iostream>

float kelvinToFahrenheit(float K);

int main() {
    float K;
    std::cout << "Kelvin to Fahrenheit Converter. Please enter the Kelvin temperature: ";
    std::cin >> K;
    std::cout << "The equivalent temperature in fahrenheit is: " << kelvinToFahrenheit(K);
    return 0;
}

float kelvinToFahrenheit(float K){
    float F = ((K - 273.15) * (9.0/5.0) + 32.0);
    return F;
}