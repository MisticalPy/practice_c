#include <stdio.h>


int main(void)
{
    int num;

    printf("Введите число: ");
    scanf("%d", &num);
    int first = num % 10;
    printf("1й разряд: %d\n", first);
    num /= 10;
    int second = num % 10;
    printf("2й разряд: %d\n", second);
    num /= 10;
    int third = num % 10;
    printf("3й разряд: %d\n", third);

    return 0;
}
