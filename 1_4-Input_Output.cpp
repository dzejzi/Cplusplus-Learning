#include<iostream>
#include<iomanip>
#include<math.h>
#include<conio.h>
using namespace std;

int main()
{
    cout << "Program oblicza objetosc kuli o promieniu r " << endl;
    float r, objetosc;
    cout << "Wprowadz promien kuli r =  ";
    cout << fixed << setprecision(2);
    cin >> r;
    objetosc = (4  *  M_PI * pow( r, 3)) / 3;
    cout << "Objetosc kuli o promieniu " << r << " = " << objetosc << endl;
    getch();

}
