#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int zad1();
int zad2();
int zaf3();

int main(void)
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    zad1();
    zad2();
    zad3();

    return 0;
}

int zad1()
{
    char c;

    printf("Введите один символ: ");
    scanf(" %c", &c);

    switch (c)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Это цифра\n");
        break;

    default:
        if (isalpha((unsigned char)c))
            printf("Это буква\n");
        else
            printf("Это не буква и не цифра\n");
        break;
    }

    return 0;
}
int zad2()
{
    float x, y;
    char c;

    printf("Введите выражение (например, 5+3): ");
    scanf("%f%c%f", &x, &c, &y);

    switch (c)
    {
    case '+':
        printf("Результат = %f\n", x + y);
        break;

    case '-':
        printf("Результат = %f\n", x - y);
        break;

    case '*':
        printf("Результат = %f\n", x * y);
        break;

    case '/':
        if (y != 0)
            printf("Результат = %f\n", x / y);
        else
            printf("Ошибка: деление на ноль!\n");
        break;
    case '^':
    {
        float result = 1;
        int i;

        if (y < 0 || y != (int)y)
        {
            printf("Для возведения в степень введите целое неотрицательное число.\n");
            break;
        }

        for (i = 0; i < (int)y; i++)
            result *= x;
        printf("Результат = %f\n", result);
        break;
    }

    default:
        printf("Неизвестная операция\n");
        break;
    }

    return 0;
}

int zad3()
{
    int month;

    printf("Введите номер месяца (1-12): ");
    scanf("%d", &month);

    switch (month)
    {
    case 12:
    case 1:
    case 2:
        printf("Зима\n");
        break;

    case 3:
    case 4:
    case 5:
        printf("Весна\n");
        break;

    case 6:
    case 7:
    case 8:
        printf("Лето\n");
        break;

    case 9:
    case 10:
    case 11:
        printf("Осень\n");
        break;

    default:
        printf("Ошибка! Введите число от 1 до 12.\n");
    }

    return 0;
}