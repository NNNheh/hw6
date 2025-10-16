#include <locale.h>
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>


int main() {
    double a, b, c;
    setlocale(LC_ALL, "RUS");

    printf("Введите три вещественных числа: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Ошибка: введите три числовых значения!\n");
        return 1;
    }

    printf("\n");
    printf("Числа, принадлежащие интервалу (-1, 1):\n");
    printf("_________________________\n");
    printf("|   Число   | Принадлежит |\n");
    printf("-------------------------\n");

    if (a > -1 && a < 1) {
        printf("| %9.4f |     да      |\n", a);
    }
    else {
        printf("| %9.4f |     нет     |\n", a);
    }

    if (b > -1 && b < 1) {
        printf("| %9.4f |     да      |\n", b);
    }
    else {
        printf("| %9.4f |     нет     |\n", b);
    }

    if (c > -1 && c < 1) {
        printf("| %9.4f |     да      |\n", c);
    }
    else {
        printf("| %9.4f |     нет     |\n", c);
    }

    printf("-------------------------\n");

    return 0;

    printf("-------------------------\n");
}
