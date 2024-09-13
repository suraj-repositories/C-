#include <iostream>

int main(){

    // type conversion = convertsion a value of one data type to another
    //                  Implicit = automatic
    //                  Explicit = Precedevalue with new data type (int)

    double x = (int) 3.14;
    std::cout << x << '\n';

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;  // pay attention when using integer devision

    std::cout << score << "%";

    return 0;
}