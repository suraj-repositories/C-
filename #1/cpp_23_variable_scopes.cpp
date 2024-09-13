#include <iostream>

int myNum = 3;

void printNum();

int main(){
    // Local variable : declared inside a function or block {}
    // Global variable : declared outside of all functions

    // img = ::variable where :: is scope resolution operator

    int myNum = 1;

    std::cout << ::myNum << std::endl;
    printNum();

    return 0;
}

void printNum(){
    int myNum = 2;
    std::cout << myNum << std::endl;
}