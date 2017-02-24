#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main()
{
 cout << "Program oblicza wartosc x z rownania ax+b=c" << endl;
 float a, b, c, x;
 cout << fixed << setprecision(2);
 cout << "Podaj a = ";
 cin >> a;
 if (a == 0)
 {
     cout << "Niedozwolona wartosc czynnika a. Nacisnij dowolny klawisz";
 } else
 {
  cout << "Podaj b = ";
  cin >> b;
  cout << "Podaj c = ";
  cin >> c;
  x = (c - b)/a;
  cout << "Wynik, x = " << x << endl;
  cout << "Nacisnij dowolny klawisz" << endl;
 }

 getch();
}
