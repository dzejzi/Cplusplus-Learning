#include <iostream>
using namespace std;

int main()
{
    cout << " Kalkulator " << endl;
    cout << " Wprowadz wyrazenie do obliczenia " << endl;

    double a;
    cin >> a;

    char znak;
    cin >> znak;

    double b;
    cin >> b;

    bool c;
    c = cin.good ();
    cin.clear (); cin.sync ();

    if ( c == 0 )
        cout << " Wprowadzone wyrazenie jest niepoprawne " << endl;
    else
    {

    switch ( znak )
    {
    case '+':
        cout << " Suma = " << a + b << endl;
        break;

    case '-':
        cout << " Roznica = " << a - b << endl;
        break;

    case '*':
        cout << " Iloczyn = " << a * b << endl;
        break;

    case '/':
        if ( b == 0)
        cout << " Nigdy cholero nie dziel przez O" << endl;
        else
        cout << " Iloraz = " << a / b << endl;
        break;

    default:
        cout << " Wprowadzone wyrazenie jest niepoprawne " << endl;
    }
    }

    cout << " Koniec " << endl;
    return 0;
}

