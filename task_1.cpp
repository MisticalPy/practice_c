#include <stdio.h>
#include <math.h>

int main() {
    double x1 = 3.0;
    double x2 = 5.0;
    double y;

    y = (exp(-x1) + exp(-x2)) / 2.0;

    printf("x1 = %.2f, x2 = %.2f\n", x1, x2);
    printf("y = %.7f", y);

    return 0;
}