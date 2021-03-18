#include <stdio.h>
#include <stdlib.h>

unsigned int nty_wyraz(unsigned int);
int main()
{
    int a;
    printf("Podaj dodatnia liczbe calkowita: ");
    scanf("%d",&a);
    printf("%d",nty_wyraz(a));
    return 0;
}


unsigned int nty_wyraz(unsigned int n)
{
    if(n<=0)
        return 1;
    else
        return 2*nty_wyraz(n-1)+5;

}
