#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    const short ile = 10;
    int dane[ ile ];
    for ( int i = 0; i < 10; i++)
    {
     dane [ i] = i;
     cout << "dane[" << i << "] = " << dane [ i ] << endl;
    }


    getch();

}
