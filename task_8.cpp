#include <stdio.h>

int main(void)
{
    long long entire_population, russian_population;
    float res;
    printf("Введите население всего мира: ");
    scanf("%lld", &entire_population);
    printf("Введите население России: ");
    scanf("%lld", &russian_population);
    res = (russian_population * 100.0) / entire_population;
    printf("Население России составляет %.5f%% населения мира.", res);
    return 0;
}
