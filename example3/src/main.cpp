#include "class_b.hpp"

int main()
{
    A a(0,1,2,3,4,5);
    a.hello_world();

    // Uncomment to remove "unused" message on `D_CLASS(B)` (LN7 of `class_b.hpp`)
    /*
    B b(0,1,2,3,4,5);
    b.hello_world();
     */

    return 0;
}
