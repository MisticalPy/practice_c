#include <stdio.h>

int main(void) {
    int num;
    float res;
    printf("Введите температуру в градусах Цельсия: ");
    scanf("%d", &num);
    res = num * 1.8 + 32;
    printf("%.2f", res);

    return 0;

}