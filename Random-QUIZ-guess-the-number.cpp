#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand ( time ( NULL ) );
    cout << " === Program losuje liczbe z przedzialu od 1 do 1000 === " << endl;
    int program = ( ( rand() % 1000 ) + 1) ;

    int zawodnik;

    int strzal = 0;
do
    {
    cout << " Zgadnij liczbe ktora wylosowal program:  ";
    cin >> zawodnik;
    cin.clear(); cin. sync();
    if ( zawodnik >= 1 && zawodnik <= 1000)
    {
        if ( zawodnik > program )
        {
        cout << " Podana liczba jest wieksza niz wylosowana przez program " << endl;
        }
        else
            if ( zawodnik < program )
            {
            cout << " Podana liczba jest mniejsza niz wylosowana przez program " << endl;
            }
            else
                if ( zawodnik = program )
                {
                cout << " Gratulacje odgadles liczbe " << endl;
                }
     strzal ++;
     }
    else
        {
        cout << " == Podana liczba nie nalezy do przedzialu od 1 do 1000 == " << endl;
        cout << " == Podaj poprawna wartosc == " << endl;
        }

    } while ( zawodnik != program );

cout << " KONIEC " << endl;
cout << " Liczba oddanych strzalow: " << strzal << endl;

return 0;
}
