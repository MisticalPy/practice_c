#include <stdio.h>
#include <math.h>

int main() {
    double a = 3.0, b = 4.0, c = 5.0;  // пример сторон

    printf("Введите длину стороны a: ");
    scanf("%lf", &a);
    printf("Введите длину стороны b: ");
    scanf("%lf", &b);
    printf("Введите длину стороны c: ");
    scanf("%lf", &c);
    double p, s;

    // Вычисление полупериметра
    p = (a + b + c) / 2.0;

    // Вычисление площади по формуле Герона
    s = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Для треугольника со сторонами:\n");
    printf("a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
    printf("Площадь S = %.0f", s);

    return 0;
}