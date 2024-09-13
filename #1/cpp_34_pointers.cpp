#include <iostream>

int main(){

    // pointer : variable that stores a memory address of another variable
    //           sometimes it's easier to work with an address
    // & address of operator
    // * derefernce operator

    std::string name = "Shubham kumar";
    int age = 21;
    std::string freePizza[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *p_freePizza = freePizza;

    std::cout << *pName << std::endl;
    std::cout << *pAge << std::endl;
    std::cout << *freePizza << std::endl;





    std::cout << *pName; 



    return 0;
}