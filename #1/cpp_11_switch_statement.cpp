#include <iostream>

int main()
{

    int day;
    std::cout << "Enter day (1 - 7) : ";
    std::cin >> day;

    switch (day)
    {
    case 1:
        std::cout << "Monday";
        break;
    case 2:
        std::cout << "Tuesday";
        break;
    case 3:
        std::cout << "Wednesday";
        break;
    case 4:
        std::cout << "Thrusday";
        break;
    case 5:
        std::cout << "Friday";
        break;
    case 6:
        std::cout << "Saturday";
        break;
    case 7:
        std::cout << "Sunday";
        break;
    default:
        std::cout << "Please Enter a valid number (1 - 7)";
    }

    return 0;
}