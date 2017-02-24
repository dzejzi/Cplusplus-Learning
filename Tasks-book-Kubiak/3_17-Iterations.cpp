#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    cout << "Program znajduje najmniejsza i najwieksza liczbe ze zbioru wylosowanych 5 liczb z przedzialu od 0 do 99 oraz oblicza srednia ze wszystkich wylosowanych liczb" << endl;
    srand(time(NULL));
    int najmniejsza = 99;
    int najwieksza = 0;
    int suma = 0;
    int n = 1;
    do
    {
     int liczba = (rand() % 99) + 0;
     cout << "los " << n << " to " << liczba << endl;
     suma += liczba;

     if ( liczba < najmniejsza)
     najmniejsza = liczba;
     if (liczba > najwieksza)
     najwieksza = liczba;

     n++;
    } while ( n <= 5 );
    cout << "najmniejsza = " << najmniejsza << endl;
    cout << "najwieksza = " << najwieksza << endl;
    cout << "Srednia wylosowanych liczb = " << suma / 5 << endl;
    return 0;
}

