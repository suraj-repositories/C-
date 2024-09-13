#include <iostream>

int main(){

    // Pay attention to the array length calculation
    
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string fruits[] = {"apple", "banana", "orange", "coconut"};
    
    std::cout << "---------- GRADES -----------\n";
    for(int i = 0; i < sizeof(grades) / sizeof(char); i++){
        std::cout << grades[i] << '\n';
    }
    std::cout << "---------- FRUITS -----------\n";
    for(int i = 0; i < sizeof(fruits) / sizeof(std::string); i++){
        std::cout << fruits[i] << '\n';
    }

    return 0;
}