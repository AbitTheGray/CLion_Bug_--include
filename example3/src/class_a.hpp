#pragma once

D_CLASS(A)
{
public:
    A(
            int v0,
            int v1,
            int v2,
            int v3,
            int v4,
            int v5
    );

    void hello_world();

    // Not implemented in CPP and not used anywhere.
    // Appears the same way as `hello_world` above.
    void unimplemented_function();

// tries to shift everything to the left
};
