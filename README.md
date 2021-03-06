# CLion Bug Examples: --include

This is example project demonstrating bug of `--include "core.hpp"` (GCC) compile option.
It demonstrates how this affects working with CLion and when `core.hpp` contains something like `#define D_CLASS(name) class name` (which can be used to add `__declspec( dllexport )` or similar).

## Examples

All examples print `Hello, World!` and work correctly at runtime but not in CLion editor.

### Example 1
Detection of `core.hpp` from compiler option inside `CMakeLists.txt` and hover text not working properly.

### Example 2
This time `core.hpp` is also added as project source so intellisense inside it works.
Sadly this creates bug with `ECHO` inside `main.cpp`, marking it as `Empty statement`.

### Example 3
In `class_b.hpp` shows every 2nd parameter as unused even when it is handed over to parent classes' constructor.
The message talks about them (and the name of the class if in comment inside `main.cpp`) as "Global variable".
