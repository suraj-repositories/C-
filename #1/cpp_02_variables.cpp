#include <iostream>

int main(){
    int x; // declearation
    x = 5; // assignment

    std::cout << x << '\n';

    // integers (whole numbers)
    int age = 21;
    int year = 2024;
    int days = 4;

    // double (numbers including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temprature = 25.1;

    // char (signle character)
    char grade = 'A';
    char dollorSign = '$';

    // boolean (true or false)
    bool online = true;
    bool power = false;
    bool forSale = true;

    // string (objects that represents a sequence of characters)
    std::string food = "Orange";
    std::string day = "Friday";
    std::string address = "123 fake streat";

    std::cout << "Fruit " << food;

    return 0;
}