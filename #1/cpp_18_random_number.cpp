#include <iostream>

int main(){

    // pseudo-random : Not truly random (but close)
    srand(time(NULL));

    int num = (rand() % 6) + 1;  // to get the random number 1-6 
    int num2 = (rand() % 100) + 1; // to get the random number 1-100   
    
    std::cout << num << std::endl;
    std::cout << num2;
    return 0;
}