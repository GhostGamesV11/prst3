#include <stdio.h>
#include <stdlib.h>

double min(double,double);
int main()
{
    double a,b;
    printf("Podaj dwie liczby a zwrocona zostanie mniejsza\n");
    printf("Podaj pierwsza liczbe: ");
    scanf("%lf",&a);
    printf("Podaj druga liczbe: ");
    scanf("%lf",&b);
    if(a==b)
        printf("Liczby sa takie same!!!!");
    else
        printf("%lf",min(a,b));
    return 0;
}

    double min(double x,double y)
{
    if(x<y)
        return x;
    else
        return y;
}
