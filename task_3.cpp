#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    double R = 3.0, r = 6.0, h = 8.0;
    double l, s, v;

    printf("Введите радиус большего основания R: ");
    scanf("%lf", &R);

    printf("Введите радиус меньшего основания r: ");
    scanf("%lf", &r);

    printf("Введите высоту усеченного конуса h: ");
    scanf("%lf", &h);

    // Вычисление образующей
    l = sqrt(h * h + (R - r) * (R - r));

    // Вычисление площади полной поверхности
    s = PI * (R + r) * l + PI * R * R + PI * r * r;

    // Вычисление объема
    v = (1.0 / 3.0) * (R * R + r * r + R * r) * h * PI;

    printf("Параметры усеченного конуса:\n");
    printf("R = %.2f, r = %.2f, h = %.2f\n", R, r, h);
    printf("Площадь поверхности S = %.6f\n",s);
    printf("Объем V = %.6f\n", v);

    return 0;
}