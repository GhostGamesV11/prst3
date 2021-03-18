#include <iostream>

using namespace std;

unsigned int suma(unsigned int=0,unsigned int=0,unsigned int=0,unsigned int=0,unsigned int=0);

int main()
{
    cout<<"Sumy podanych liczb"<<endl;
    cout<<suma(4,2,3,4,6)<<endl;
    cout<<suma(1,2,3,1)<<endl;
    cout<<suma(6,4,5)<<endl;
    cout<<suma(3,9)<<endl;
    return 0;
}

unsigned int suma(unsigned int a,unsigned int b,unsigned int c,unsigned int d,unsigned int e)
{
    unsigned int wynik=0;
    wynik =a+b+c+d+e;
}
