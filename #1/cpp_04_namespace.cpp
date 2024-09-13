#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){

    // Namespace - provides a solution for preventing name conflicts
    //              in large projects. Each entity need a unique name
    //              A namespace allows for identically named entities
    //              as long as the namespace are defferent.

    // int x = 0;

    // std::cout << first::x << '\n';
    // std::cout << second::x << '\n';


    using namespace first;
    std::cout << x << '\n';

    return 0;
}