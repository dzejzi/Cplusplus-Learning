#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout << "Program wyswietla duze litery alfabetu od A do Z i od Z do A" << endl;
    char znak;
    znak = 'A';
    while (znak <= 'Z')
    {
        cout << znak << ", ";
        znak++;
    }
    cout << endl;

    znak = 'Z';
    while (znak >= 'A')
    {
        cout << znak << ", ";
        znak--;
    }
    getch();


}

