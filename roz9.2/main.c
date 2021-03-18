#include <stdio.h>
#include <stdlib.h>

void rzad_zn(char, int, int);

int main()
{
    char znak;
    int liczba1, liczba2;
    printf("Podaj znak: ");
    scanf("%c",&znak);
    printf("Podaj nr kolumny startowej: ");
    scanf("%d",&liczba1);
    printf("Podaj nr kolumny koncowej: ");
    scanf("%d",&liczba2);
    rzad_zn(znak, liczba1, liczba2);
    return 0;
}

void rzad_zn(char ch, int i, int j)
{
    for(int a=0;a<8;a++)
    {
        for(int b=0;b<i-1;b++)
            printf(" ");
        for(int b=0;b<=j-i;b++)
            printf("%c", ch);
        printf("\n");
    }
}
