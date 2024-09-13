#include <iostream>

int main(){

    // break : break out of a loop
    // continue : skip current iteration

    for(int i = 0; i < 5; i++){
        std::cout << i + 1 << std::endl;

        if(i == 3){
            break;
        }
    }

    for(int i = 0; i < 5; i++){
        std::cout << i + 1 << std::endl;

        if(i == 3){
            continue;
        }
    }

    return 0;
}