#include <stdio.h>

char znak;
double l1, l2, wynik;

int main()
{
    do
    {
        printf("Podaj dzialanie (+, -, *, /): \n");
        fflush(stdin);
        znak = getchar();
    } while ((znak != '+') && (znak != '-') && (znak != '*') && (znak != '/'));

    do
    {
        printf("Podaj pierwsza liczbe: ");
        fflush(stdin);
    } while (!scanf("%lf", &l1));

    do
    {
        printf("Podaj druga liczbe: ");
        fflush(stdin);
    } while (!scanf("%lf", &l2));

    switch (znak)
    {
    case '+':
        wynik = l1 + l2;
        break;
    case '-':
        wynik = l1 - l2;
        break;
    case '*':
        wynik = l1 * l2;
        break;
    case '/':
        if (l2 == 0)
        {
            printf("Nie dziel przez 0");
            return 0;
        }
        wynik = l1 / l2;
        break;
    }
    printf("%lf\n", wynik);
    return 0;
}