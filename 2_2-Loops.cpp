#include<iostream>
#include<math.h>
#include<iomanip>
#include<conio.h>
using namespace std;

int main()
{
    cout << "Program oblicza pierwiastki x1 i x2 rownania kwadratowego ax^2+bx+c=0" << endl;
    float a, b, c, x1, x2, delta;
    cout << "Podaj a = ";
    cin >> a;

    if  (a != 0)
    {
    cout << "Podaj b = ";
    cin >> b;
    cout << "Podaj c = ";
    cin >> c;
    cout << fixed << setprecision(2);


    delta = (b*b) - (4*a*c);
    if (delta > 0 )
    {
    x1 = (-b-sqrt(delta))/(2*a);
    x2 = (-b+sqrt(delta))/(2*a);
    cout << "Rownanie ma dwa rozwiazania rzeczywiste: " << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    } else
    {
    if (delta == 0)
    {
    x1 = -b / (2*a);
    cout << "Rownanie ma jedno rozwiazanie: " << endl;
    cout << "x1 = " << x1 << endl;
    }
    else
        cout << "Rownanie nie posiada rozwiazan";
    }


    } else
    cout << "Niedozwolona wartosc czynnika a. Nacisnij dowolny klawisz";

    getch();
}
