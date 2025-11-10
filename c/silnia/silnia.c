#include <stdio.h>

long long int s = 1;
int a = -1;

int main()
{
    do
    {
        printf("Podaj liczbe naturalna mniejsza niz 20: ");
        fflush(stdin);
    } while ((!scanf("%d", &a)) || (a < 0) || a > 20);

    int i;
    for (i = 1; i <= a; i++)
    {
        s = s * i;
    }

    printf("silnia = %lld", s);

    return 0;
}
