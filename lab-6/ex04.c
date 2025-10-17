// Write a program that receives 2 vectors as each components and stores in a struct named “Vector” with the following properties: x(float), y(float) and find the sum between these two vectors

#include <stdio.h>

struct vector {
    float x;
    float y;
};

int main() {
    struct vector u, v, result;

    u.x = 2.3;
    u.y = 1.5;
    v.x = 0.0;
    v.y = 4.0;

    result.x = u.x + v.x;
    result.y = u.y + v.y;

    printf("u_x: %.1f\n", u.x);
    printf("u_y: %.1f\n", u.y);
    printf("v_x: %.1f\n", v.x);
    printf("v_y: %.1f\n", v.y);
    printf("Resultant vector is equivalence to %.1fi + %.1fj\n", result.x, result.y);

    return 0;
}
