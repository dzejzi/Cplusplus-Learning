#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout << "Program wyswietla duze litery alfabetu od A do Z i od Z do A" << endl;
    char znak;
    for ( znak = 'A'; znak <= 'Z'; znak++)
        cout << znak << ", ";

    cout << endl;

    for ( znak = 'Z'; znak >= 'A'; znak--)
        cout << znak << ", ";
    getch();


}
