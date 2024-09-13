#include <iostream>

int main(){
    
    //  ternary operator ?: = replacement to an if/else statement
    // conditon ? expression1 : expression2;

    int grade = 98;
    grade >= 33 ? std::cout << "You Passed !\n" : std::cout << "You Failed\n";

    int number = 10;
    number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

    return 0;
}