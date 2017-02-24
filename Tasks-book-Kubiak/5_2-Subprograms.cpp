#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;


void pole_prostokata( )
{
    cout << "Program oblicza pole prostokata o bokach a i b" << endl;
    float a, b, pole;
    cout << "Wprowadz a = ";
    cin >> a;
    cout << "Wprowadz b = ";
    cin >> b;
    pole = a*b;
    cout << fixed << setprecision(2);
    cout << "Pole prostokata o bokach: " << a << " i " << b << " wynosi: " << pole << endl;

}

int main()
{
    pole_prostokata();
    getch();
}
