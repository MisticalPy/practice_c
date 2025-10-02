#include <stdio.h>

int main() {
    char first_name[50];
    char last_name[50];
    int age;

    // Ввод данных с помощью scanf
    printf("Как вас зовут? ");
    scanf("%49[^\n]", first_name);  // Читаем до символа новой строки

    printf("Как ваша фамилия? ");
    scanf(" %49[^\n]", last_name);  // Пробел перед % игнорирует предыдущий \n

    printf("Сколько вам лет? ");
    scanf("%d", &age);

    printf("Имя: %s, %s\n", last_name, first_name);
    printf("Возраст: %d\n", age);

    return 0;
}