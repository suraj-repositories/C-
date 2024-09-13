#include <iostream>

int main()
{

    // Null Value : a special value that means something has no value.
    //            When a pointer is not null value
    //            that pointer is not pointing at anything (null  pointer)

    // nullptr = keyword represents a null pointer literal

    // nullptr are helpful when determining if an address
    // was successfully aligned to a pointer

    // When using pointers be careful that your code isn't
    // dereferernceing nullptr or pointeing to free memory
    // this will cause undefined behaviour

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "address was not assigned \n";
    }
    else
    {
        std::cout << "address was assigned! \n";
    }

    return 0;
}