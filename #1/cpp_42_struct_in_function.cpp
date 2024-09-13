#include <iostream>

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car car);

void paintCar(Car &car, std::string color);      // use reference if you want to modify the value in function

int main(){
    
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "Black";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "White";
    
    paintCar(car1, "gold");

    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car car){
    std::cout << car.model << std::endl;
    std::cout << car.year << std::endl;
    std::cout << car.color << std::endl << std::endl;
}

void paintCar(Car &car, std::string color){
    car.color = color;
}