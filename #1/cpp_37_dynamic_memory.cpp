#include <iostream>

int main(){

    // dynamic memory : Memory that is allocated after the program
    //                  it is already compiled and running.
    //                  Use the 'new' operator to allocate
    //                  memory in the heap space rather than the stack

    //                  Useful when we don't know how much memory
    //                  we will need. Makes our programs more flexible
    //                  especially when acceptiong user input.

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum;   // detach the memory allocated to prevent the memory leaks;

    return 0;
}