#include <iostream>

class Car{
    public: 
        std::string modal;
        int year;
        std::string color;

        void drive(){
            std::cout << "Driving !" << std::endl;
        }

        void breakPressed(){
            std::cout << "Press foots on break!" << std::endl;
        }

};

int main(){

        // Object : A collection of attributes and methods
        //         They can have characterstics and could perform actions
        //         Can be used to mimic real world items (ex. Phone, Book, Dog)
        //         Created form a class which acats as a 'blue-print'

    Car car1;
    Car car2;

    car1.modal = "Mustang";
    car1.year = 2024;
    car1.color = "Red";


    car2.modal = "Corvett";
    car2.year = 2025;
    car2.color = "Blue";

    std::cout << car1.modal << " " << car1.year << " " << car1.color << std::endl;
    car1.drive();
    car1.breakPressed();
   
    std::cout << std::endl;
    
    std::cout << car2.modal << " " << car2.year << " " << car2.color << std::endl;
    car2.drive();
    car2.breakPressed();



    return 0;
}
