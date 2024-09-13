#include <iostream>

// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){

    // typeof = reserved keyword used to create an additional name
    //          (alias) for antoher data type
    //          New identifier for an existing type
    //          Helps with readability and reduces types
    //          use when there is a clear benifit
    //          Replaced with 'using'  (work better w/ templates)

    text_t firstName = "Shubham";
    number_t age = 34;

    std::cout << firstName << "\n";
    std::cout << age << "\n";

    return 0;
}