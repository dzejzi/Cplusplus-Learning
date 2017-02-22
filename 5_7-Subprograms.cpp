#include<iostream>
#include<conio.h>
using namespace std;

const short n = 6;
int liczby [ n ] ;

void czytaj_dane()
{
 cout << "Program wczytuje 6 liczb calkowitych podanych przez uzytkownika i sortuje je w kolejnosci roznacej" << endl;
 for (int i = 0; i < n; i++)
 {
  cout << "Podaj liczbe " << i+1 << ": ";
  cin >> liczby[i];
 }

}

void przetworz_dane()
{
 for (int i = 0; i < n; i++)
 {
     for (int j = 0; j < (n - 1); j++)
     {
         if (liczby [j] > liczby [j+1])
            swap( liczby[j], liczby[j+1]);
     }
 }
}

void wyswietl_wyniki()
{
 cout << "Zawartosc posortowanej tablicy:" << endl;
 for (int i = 0; i < n; i++)
 cout << liczby[i] << " ";

}

int main()
{
    czytaj_dane();
    przetworz_dane();
    wyswietl_wyniki();
    getch();
}
