#include <iostream>

void bakePizza();

void bakePizza(std::string toping1);

void bakePizza(std::string toping1, std::string toping2);

int main(){

    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni", "mushroom");
    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string toping1){
    std::cout << "Here is you " << toping1 << " pizza!\n";
}

void bakePizza(std::string toping1, std::string toping2){
    std::cout << "Here is you " << toping1 << " " << toping2 << " pizza!\n";
}
