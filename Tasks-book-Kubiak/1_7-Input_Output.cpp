#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
   cout << "Program oblicza sume, roznice, iloczyn, iloraz dla liczb x, y " << endl;
    float x, y, suma, roznica, iloczyn, iloraz;
    cout << fixed << setprecision(2);
    cout << "Wprowadz x = ";
    cin >> x;
    cout << "Wprowadz y = ";
    cin >> y;
    suma = x + y;
    roznica = x - y;
    iloczyn = x * y;
    iloraz = x / y;
    cout << "Suma = " << suma << endl;
    cout << "Roznica = " << roznica << endl;
    cout << "Iloczyn = " << iloczyn << endl;
    cout << "Iloraz = " << iloraz << endl;
    getch();
}
