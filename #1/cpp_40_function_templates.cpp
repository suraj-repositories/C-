#include <iostream>

template <typename T>
T max(T x, T y){
    return (x > y) ? x : y;
}

template <typename T, typename U>
auto min(T x, U y){
    return (x < y) ? x : y;
}

int main(){

    // function templates : describes what a function looks like
    //                      Can be used to generate as many overloaded functions
    //                      each using different data types

    //                      Ex > "It's like a cookie cutter..."
    //                      "Cookies are the same shape, but the dough used can be different"

    std::cout << max(2, 4) << '\n';
    std::cout << max(2.3, 2.4) << '\n';
    std::cout << max('5', '4') << '\n';

    std::cout << min(5.2, 5) << '\n'; // use different typename when there is a possibility to enter mixed datatypes

    return 0;
}
