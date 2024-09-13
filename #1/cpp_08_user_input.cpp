#include <iostream>

int main(){

    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    std::cout << "Enter your name : " ;
    std::cin >> name;
    std::cout << "Name : " << name << '\n';

    std::string fullName;
    std::cout << "Enter Your full name : ";
    std::getline(std::cin >> std::ws, fullName);            // std::ws for taking input which may contains white spaces (ws - white spaces)
    std::cout << "FullName : " << fullName << '\n';

    int age;
    std::cout << "Enter your age : " ;
    std::cin >> age;
    std::cout << "Age : " << age << '\n';

    return 0;
}
