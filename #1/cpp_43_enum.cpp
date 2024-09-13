#include <iostream>

enum Day {
    sunday = 1,
    monday = 2, 
    tuesday = 3, 
    wednesday = 4, 
    thrusday = 5, 
    friday = 6, 
    saturday = 7
};

int main(){

    // enum : a user defined data type that consists
    //     of paired named-integer constants.
    //     Great if you have a set of potential operations

    Day today = tuesday;

    switch (today)
    {
    case sunday:
        std::cout << "It's Sunday";
        break;
    case monday:
        std::cout << "It's Monday";
        break;
    case tuesday:
        std::cout << "It's Tuesday";
        break;
    case wednesday:
        std::cout << "It's Wednesday";
        break;
    case thrusday:
        std::cout << "It's Thrusday";
        break;
    case friday:
        std::cout << "It's Friday";
        break;
    case saturday:
        std::cout << "It's Saturaday";
        break;
    
    default:
        std::cout << "Not a valid choice";
        break;
    }

    return 0;
}
