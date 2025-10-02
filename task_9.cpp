#include <stdio.h>


int main(void)
{
    int num;

    printf("Введите число: ");
    scanf("%d", &num);
    int first = num % 10;
    num /= 10;
    int second = num % 10;
    num /= 10;
    int third = num % 10;
    num /= 10;
    int forth = num % 10;
    num /= 10;
    int fiveth = num % 10;
    printf("1я цифра: %d\n", fiveth);
    printf("2я цифра: %d\n", forth);
    printf("3я цифра: %d\n", third);
    printf("4я цифра: %d\n", second);
    printf("5я цифра: %d\n", first);

    return 0;
}
