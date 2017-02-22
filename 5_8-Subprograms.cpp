#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstdlib>
using namespace std;

const short n = 10;
int tablica[n];

void czytaj_dane()
{
 srand(time(NULL));
 for ( int i = 0; i < n; i++)
 {
     tablica[i]= (rand() % 100)+ 0;
 }
}

void przetworz_dane()
{
 for ( int i = 0; i < n; i++)
 {
     for (int j = 0; j < n-1; j++)
        if ( tablica[j] > tablica[j+1])
        swap( tablica[j], tablica[j+1]);
 }
}

void wyswietl_wyniki()
{
 cout << "Tablica wylosowanych liczb: " << endl;
 for ( int i = 0; i < n; i++)
 cout << tablica[i] << " ";
 cout << endl;
 cout << "Najmniejsza wylosowana liczba to: " << tablica[n-n] << endl;
 cout << "Najwieksza wylosowana liczba to: " << tablica[n-1] << endl;
}
int main()
{
    czytaj_dane();
    przetworz_dane();
    wyswietl_wyniki();
    getch();
}
