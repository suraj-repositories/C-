#include <iostream>

class Car{
    public: 
        std::string modal;
        int year;
        std::string color;

        Car(std::string modal, int year, std::string color){
            this->modal = modal;
            this->year = year;
            this->color = color;
            std::cout << "constructor is called | "<< modal << " | " << year << " | " << color << "\n";
        }

        void drive(){
            std::cout << "You start driving " << year << " " << modal << "\n";
        }

        void breakPressed(){
            std::cout << "You step on breaks!\n";
        }
        
};

int main(){

    // constructor : special method that is automatically called when an object is instanticated
    //             useful for assigning values to attributes as argument

    Car car1("Mustang", 2021, "green");
    Car car2("Corevette", 2022, "white");

    car1.drive();
    car1.breakPressed();


    car2.drive();
    car2.breakPressed();

    return 0;
}
