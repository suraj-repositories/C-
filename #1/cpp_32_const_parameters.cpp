#include <iostream>

void printInfo(const std::string name, const int age);

int main(){
    // const parameter : parameter that is effectively read only
    //                   code is more secure & conveys intent
    //                   useful for erferences and pointers

    std::string name = "Shubham kumar";
    int age = 23;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age){

    std::cout << name << std::endl;
    std::cout << age << std::endl;

}