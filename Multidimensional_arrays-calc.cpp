#include<iostream>
#include<conio.h>

using namespace std;


int main()
{

    cout << "Program pobiera od uzytkownika dwie liczby i oblicza dla nich sume, roznice, iloczyn i iloraz" << endl;
    int tab1[ 1 ];
    cout << "Podaj pierwsza liczbe: ";
    cin >> tab1[0];
    cout << "Podaj druga liczbe: ";
    cin >> tab1[ 1 ];
    while (tab1[1] == 0)
    {
     cout << "Druga liczba ma byc rozna od 0" << endl;
     cout << "Podaj druga liczbe: ";
     cin >> tab1[ 1 ];
    }

    cout << endl << endl;
    cout << "Uzytkownik podal nastepujace liczby" << endl;
    cout << "Liczba 1 = " << tab1[0] << endl;
    cout << "Liczba 2 = " << tab1[1] << endl << endl;

    int tab_wyn[] = {  tab1[0] + tab1[1],
                        tab1[0] - tab1[1],
                        tab1[0] * tab1[1],
                        tab1[0] / tab1[1]
                     };
    cout << "Wynik dodawania" << endl;
    cout << tab1[0] << " + " << tab1[1] << " = " << tab_wyn[0] << endl;
    cout << "Wynik odejmowania" << endl;
    cout << tab1[0] << " - " << tab1[1] << " = " << tab_wyn[1] << endl;
    cout << "Wynik mnozenia" << endl;
    cout << tab1[0] << " * " << tab1[1] << " = " << tab_wyn[2] << endl;
    cout << "Wynik dzielenia" << endl;
    cout << tab1[0] << " / " << tab1[1] << " = " << tab_wyn[3] << endl;
    getch();
    return 0;
}
