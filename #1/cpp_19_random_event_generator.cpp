#include <iostream>
#include <ctime>

int main()
{

    srand(time(0)); // to generate random numbers you need a seed according to which we can generate our random number
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You win a bumber prize.\n";
        break;
    case 2:
        std::cout << "You win a t-shirt.\n";
        break;
    case 3:
        std::cout << "You win a free lunch.\n";
        break;
    case 4:
        std::cout << "You win a gift card.\n";
        break;
    case 5:
        std::cout << "You win a concern tickets.\n";
        break;
    default:
        std::cout << "You lose";
    }
}