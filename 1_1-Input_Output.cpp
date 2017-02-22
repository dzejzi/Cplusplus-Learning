#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main()
{
 cout << "Program oblicza pole prostokata o bokach a i b" << endl;
 float a, b, pole;
 cout << "Podaj bok a: ";
 cin >> a;
 cout << "Podaj bok b: ";
 cin >> b;
 pole = a*b;
 cout << fixed;
 cout << setprecision(2);
 cout << " Pole prostokata wynosi: " << pole  << endl;
 getch();
}
