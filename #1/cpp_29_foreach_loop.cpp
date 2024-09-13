#include <iostream>

int main(){

    // foreach : loop that eases the traversal over an iterable data set

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string fruits[] = {"apple", "banana", "orange", "coconut"};
    
    std::cout << "---------- GRADES -----------\n";
    for(char grade : grades){
        std::cout << grade << '\n';
    }

   
    std::cout << "---------- FRUITS -----------\n";
    for(std::string fruit : fruits){
        std::cout << fruit << '\n';
    }

    return 0;
}