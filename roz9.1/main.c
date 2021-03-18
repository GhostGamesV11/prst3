#include <stdio.h>
#include <stdlib.h>

double min(double,double);
int main()
{
    double liczba1,liczba2;
    printf("Podaj dwie liczby a zwrocona zostanie mniejsza\n");
    printf("Podaj pierwsza liczbe: ");
    scanf("%lf",&liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%lf",&liczba2);
    if(liczba1 == liczba2)
        printf("Liczby sa takie same!!!!");
    else
        printf("%lf", min(liczba1, liczba2));
    return 0;
}

    double min(double x, double y)
{
    if(x < y)
        return x;
    else
        return y;
}
