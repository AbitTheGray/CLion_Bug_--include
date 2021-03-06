#include "class_a.hpp"

void A::hello_world() // <-- Got dropdown to select which function to implement
{
    std::cout << "Hello, World!" << std::endl;
}

// Tried without this, no change in editor but (obviously) compiler did not like it
A::A(int v0, int v1, int v2, int v3, int v4, int v5)
{
    int sum = v0 + v1 + v2 + v3 + v4 + v5; // This line is unused (which is correct) and there is also no problem on line 9 (all parameters are marked as used)
}