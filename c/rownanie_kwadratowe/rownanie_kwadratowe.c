#include <stdio.h>
#include <math.h>

double a, b, c;

int main()
{

    do
    {
        printf("Podaj wspolczynnik a: ");
        fflush(stdin);
    } while (!scanf("%lf", &a));

    do
    {
        printf("Podaj wspolczynnik b: ");
        fflush(stdin);
    } while (!scanf("%lf", &b));

    do
    {
        printf("Podaj wspolczynnik c: ");
        fflush(stdin);
    } while (!scanf("%lf", &c));

    // ax^2 + bx + c = 0

    if (a == 0)
    {
        printf("Rówanie jest liniowe");
        // bx+c=0 | -c -> bx=-c |:b -> x=-c/b
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Nieszkonczenie wiele rozwiazan");
            }
            else
            {
                printf("Rownanie sprzeczne");
            }
        }
        else
        {
            printf("x =  %lf", -c / b);
        }
    }
    else
    {
        double delta = pow(b, 2) - (4 * a * c);
        printf("%lf\n", delta);

        if (delta < 0)
        {
            printf("Brak rozwiazan");
        }
        else if (delta == 0)
        {
            printf("x = %lf", -b / (2 * a));
        }
        else
        {
            printf("x(1) = %lf\n", (-b - sqrt(delta)) / (2 * a));
            printf("x(2) = %lf\n", (-b + sqrt(delta)) / (2 * a));
        }
    }

    return 0;
}