#include <iostream>

int main(){

    // sizeof() = determines the size in bytes of a :
    //              variable, datatype , class, object, etc;

    double gpa = 2.5;
    std::string name = "Shubham kumar";
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string fruits[] = {"apple", "banana", "orange", "coconut"};

    std::cout << sizeof(gpa) << " bytes\n";;
    std::cout << sizeof(name) << " bytes\n";;
    std::cout << sizeof(grade) << " bytes\n";;
    std::cout << sizeof(student) << " bytes\n";;
    std::cout << sizeof(grades) << " bytes\n";;
    std::cout << sizeof(fruits) << " bytes\n";;

    // Also used to get the size of array
    std::cout << sizeof(grades) / sizeof(char) << " elements \n";
    std::cout << sizeof(fruits) / sizeof(std::string) << " elements \n";

    return 0;
}