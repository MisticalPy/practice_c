#include <stdio.h>

int main(void)
{
    int age;
    printf("Введите ваш возраст в месяцах: ");
    scanf("%d", &age);
    int res = age / 12 % 12;
    printf("Вам лет: %d", res);

    return 0;
}
