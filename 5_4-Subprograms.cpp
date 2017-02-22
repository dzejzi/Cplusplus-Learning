#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

float a, b, pole;

void czytaj_dane()
{
    cout << "Program oblicza pole prostokata o bokach a i b" << endl;
    cout << "Wprowadz a = ";
    cin >> a;
    cout << "Wprowadz b = ";
    cin >> b;
}

void przetworz_dane()
{
    pole = a*b;
    cout << fixed << setprecision(2);
}
void wyswietl_wyniki()
{
    cout << "Pole prostokata o bokach: " << a << " i " << b << " wynosi: " << pole << endl;
}

int main()
{
    czytaj_dane();
    przetworz_dane();
    wyswietl_wyniki();
    getch();
}
