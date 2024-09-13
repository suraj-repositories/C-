#include <iostream>
#include <iomanip>

int main(){

    double number;

    std::cout << "Enter Number : ";
    std::cin >> number;

    std::cout << "Your Number is : "<< std::setprecision(2) << std::fixed << number;

    return 0;
}