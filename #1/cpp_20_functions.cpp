#include <iostream>

void eatFood(std::string food);

int main(){

    // Function : a block of reuseable code

    std::string food = "orange";

    eatFood(food);
    return 0;
}
void eatFood(std::string food){
    std::cout << "I am eating " << food;
}