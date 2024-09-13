#include <iostream>

void swap(std::string &x, std::string &y);

int main()
{

    std::string x = "Cola";
    std::string y = "Water";

    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;

    swap(x, y);

    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
}

void swap(std::string &x, std::string &y)
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}