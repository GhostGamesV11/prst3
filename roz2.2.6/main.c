#include <stdio.h>
#include <stdlib.h>

int potega(int,int);

int main()
{
    int a,b;
    printf("Podaj dwie liczby nieujemne rozne od zera:\n");
    printf("Podaj pierwsza liczbe:");
    scanf("%d",&a);
    printf("Podaj druga liczbe:");
    scanf("%d",&b);
    printf("Wynik to %d",potega(a,b));
    return 0;
}

int potega(int n,int m)
{
    int wynik=1;
    for(int i=m;i!=0;i--)
        wynik*=n;
    return wynik;
}
