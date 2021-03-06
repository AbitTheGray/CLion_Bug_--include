#pragma once
// Formatting in this file was not changes in any way (or even by using `Reformat code`), it lays the way it was written down

#include "class_a.hpp"

// The `B` on next line says: Global variable 'B' is never used
D_CLASS(B) : public A
        {
public:
typedef int int_t;
B(
        int_t v0,
int_t v1, // v1 (+ v2 and v3) are gray and say: Global variable 'v1' is never used
        int_t v2,
int_t v3,
        int_t v4,
int_t v5
        ) : A(v0, v1, v2, v3, v4, v5) // All of them: Global variable '...' is never used
{

}
        };