#include <iostream>

int main(){
    // array : a data structure that can hold multiple values
    //         values are accessable by an index number
    //         "kind of like a variable that holds multiple values"

    std::string cars[] = {"Corvette", "Mustang","Camry"};

    cars[0] = "camaro";

    std::cout << cars[0] << std::endl;
    std::cout << cars[1] << std::endl;
    std::cout << cars[2] << "\n\n";
    

    std::string foods[3];

    foods[0] = "Pizza";
    foods[1] = "Donut";
    foods[2] = "Sushi";

    std::cout << foods[0] << std::endl;
    std::cout << foods[1] << std::endl;
    std::cout << foods[2] << std::endl;

    return 0;
}