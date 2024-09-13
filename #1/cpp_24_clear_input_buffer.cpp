#include <iostream>

int main(){

    // Input buffer : whenever you enter input there is a newline character is also taken 
    //                In the case of char it should work as a char array if using this in loop
    //                to pretend this use flush the input buffer after taking input

    char grade;

    do{
        std::cout << "Enter your grade : " ;
        std::cin >> grade;
       
        std::cin.clear();  // to test this remove these two lines and try to give input of string more than one character
        fflush(stdin);

        std::cout << "Your grade is : " << grade << std::endl;


    }while(grade != 'Z');

    return 0;
}