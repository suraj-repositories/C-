#include <iostream>

void walkIterative(int steps);
void walkRecursive(int steps);

int main(){

    // recursion: a programming technique where a function
    //             invokes itself from within
    //             brak a complex concept into a repeatable single step

    //             (iterative vs recursive)
    //             Advantages : less code and cleaner
    //                         useful for sorting and searching algorithms

    //             Disadvantages : uses more memory
    //                             slower

    walkIterative(10);
    walkRecursive(10);

    return 0;
}

void walkIterative(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step! ITERATIVE\n";
    }
}

void walkRecursive(int steps){
    if(steps > 0){
        std::cout << "You take a step! RECURSIVE\n";
        walkRecursive(steps - 1);
    }
}