#include<iostream>
#include<math.h>
#include<iomanip>
#include<conio.h>
using namespace std;

int main()
{
    cout << "Program oblicza pierwiastki x1 i x2 rownania kwadratowego ax^2+bx+c=0" << endl;
    float a, b, c, x1, x2, delta;
    cout << fixed << setprecision(2);
    int liczba_pierwiastkow;
    cout << "Podaj a = ";
    cin >> a;
    if ( a == 0)
    {
        cout << "Niedozwolona wartosc czynnika a. Nacisnij dowolny klawisz";
    } else
        {
        cout << "Podaj b = ";
        cin >> b;
        cout << "Podaj c = ";
        cin >> c;

        delta = (b*b) - (4*a*c);
        if (delta > 0)
           {
            liczba_pierwiastkow = 2;
           } else
            if (delta == 0)
                {
                liczba_pierwiastkow = 1;
                } else
                liczba_pierwiastkow = 0;


        switch (liczba_pierwiastkow)
        {
            case 2:
            x1 = (-b-sqrt(delta))/(2*a);
            x2 = (-b+sqrt(delta))/(2*a);
            cout << "Rownanie ma dwa rozwiazania rzeczywiste: " << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
            break;

            case 1:
            x1 = -b / (2*a);
            cout << "Rownanie ma jedno rozwiazanie: " << endl;
            cout << "x1 = " << x1 << endl;
            break;


            case 0:
             cout << "Rownanie nie posiada rozwiazan";
             break;

            default:
            break;

        } //switch

        }//if a
        getch();
}
