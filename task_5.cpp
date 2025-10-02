#include <stdio.h>


int main(void) {
    float num;
    printf("Введите число: ");
    scanf("%f", &num);
    int res = (int)(num * 10) % 10;
    printf("%d", res);
    return 0;
}