#include <iostream>
int main(){

    // Reference : https://cplusplus.com/reference/string/string/?kw=string+

    std::string name;

    std::cout << "Enter your name : ";
    std::getline(std::cin , name);

    std::cout << name.length() << std::endl;
    std::cout << name.empty() << std::endl;
    std::cout << name.append("@gmail.com") << std::endl;
    std::cout << name.at(0) << std::endl;
    std::cout << name.find(' ') << std::endl;

    name.insert(0, "@");
    std::cout << name << std::endl;
    
    name.erase(0, 3);
    std::cout << name << std::endl;

    name.clear();
    std::cout << "Name : " << name << std::endl;
    
    return 0;
}
