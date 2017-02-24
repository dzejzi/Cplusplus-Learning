#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout << "Program wyswietla duze litery alfabetu od A do Z i od Z do A" << endl;
    char znak;
    znak = 'A';
    do
    {
        cout << znak << ", ";
        znak++;
    } while (znak <= 'Z');
    cout << endl;

    znak = 'Z';
    do
    {
        cout << znak << ", ";
        znak--;
    } while (znak >= 'A');
    getch();


}

