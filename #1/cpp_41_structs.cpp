#include <iostream>

struct student
{
    std::string name;
    int age;
    double gpa;
    bool entrolled = true;
};


int main(){

        // struct = A structure that group related variables under one name
        //         structs can contain many different datatypes (string, int, char, double , bool etc..)
        //         variables in a struct are known as 'members'
        //         members can be access with . "Class member access operator"

    student student1;
    student1.name = "Tushar srivastav";
    student1.age = 23;
    student1.gpa = 2.2;
    student1.entrolled = false;

    student student2;
    student2.name = "Saurabh rathore";
    student2.age = 21;
    student2.gpa = 8.2;

    std::cout << student1.name << std::endl;
    std::cout << student1.age << std::endl;
    std::cout << student1.gpa << std::endl;
    std::cout << student1.entrolled << std::endl;
    
    std::cout << student2.name << std::endl;
    std::cout << student2.age << std::endl;
    std::cout << student2.gpa << std::endl;
    std::cout << student2.entrolled << std::endl;








    return 0;
}