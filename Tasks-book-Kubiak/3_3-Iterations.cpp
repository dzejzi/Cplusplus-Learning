#include<iostream>

using namespace std;
int main()
{
    cout << "Program oblicza wartosc funkcji od y=3x dla x zmieniajacego sie od 0 do 10" << endl;
    int x=0;
    while ( x <= 10)
    {
        cout << "Wartosc funkcji y dla x = " << x << " wynosi: " << 3 * x << endl;
        x++;
    }
    return 0;
}

