#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    const short ile = 10;
    int dane[ ile ];
    int wartosc = 9;
    for ( int i = 0; i < 10; i++)
    {
     dane [ i ] = wartosc;
     wartosc--;
     cout << "dane[" << i << "] = " << dane [ i ] << endl;
    }


    getch();

}

