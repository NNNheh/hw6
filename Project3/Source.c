#include <locale.h>
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>


int main() {
    double a, b, c;
    setlocale(LC_ALL, "RUS");

    printf("������� ��� ������������ �����: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("������: ������� ��� �������� ��������!\n");
        return 1;
    }

    printf("\n");
    printf("�����, ������������� ��������� (-1, 1):\n");
    printf("_________________________\n");
    printf("|   �����   | ����������� |\n");
    printf("-------------------------\n");

    if (a > -1 && a < 1) {
        printf("| %9.4f |     ��      |\n", a);
    }
    else {
        printf("| %9.4f |     ���     |\n", a);
    }

    if (b > -1 && b < 1) {
        printf("| %9.4f |     ��      |\n", b);
    }
    else {
        printf("| %9.4f |     ���     |\n", b);
    }

    if (c > -1 && c < 1) {
        printf("| %9.4f |     ��      |\n", c);
    }
    else {
        printf("| %9.4f |     ���     |\n", c);
    }

    printf("-------------------------\n");

    return 0;

    printf("-------------------------\n");
}
