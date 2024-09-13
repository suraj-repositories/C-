#include <iostream>

int main(){

    // fill() : Fill a range of elements with the specified value
    //          fill(begin, end, value)
    
    const int SIZE = 10;
    std::string foods [SIZE];   
    
    fill(foods, foods + (SIZE / 3), "pizza");
    fill(foods + (SIZE / 3), foods + (SIZE / 3)*2, "Hotdog");
    fill(foods + (SIZE / 3) * 2, foods + SIZE, "Hamburger");

    for (std::string food : foods)
    {
        std::cout << food << std::endl;
    }
    
    return 0;
}