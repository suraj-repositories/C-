#include <iostream>

class Pizza{
    public: 
        std::string topping1;
        std::string topping2;

    Pizza(){}

    Pizza(std::string topping1){
        this->topping1 = topping1;
    }

    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main(){

    Pizza pizza1("Perperoni");
    Pizza pizza2("mushrooms", "peppers");
    Pizza pizza3;

    std::cout << "#1 : " << pizza1.topping1 << std::endl;
    std::cout << "#2 : " << pizza1.topping1 << " " << pizza2.topping2 << std::endl;
    std::cout << "#3 : No toppings pizza" << std::endl;



    return 0;
}
