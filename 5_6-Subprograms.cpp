#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstdlib>
using namespace std;

const short n = 10;
int suma;
int tablica [n] [n];

void czytaj_dane()
{
  srand(time(NULL));
  for (int i = 0; i < n; i++)
  {
   for (int j = 0; j < n; j++)
        {
            if (i == j)
            tablica [i] [j] = (rand() % 10) + 0;
            else
            tablica [i] [j] = 0;
         }
  }
}

void przetworz_dane()
{
 for (int i = 0; i < n; i++)
   suma += tablica [i] [i];
}

void wyswietl_wyniki()
{
 for (int i = 0; i < n; i++)
  {
   for (int j = 0; j < n; j++)
    cout << tablica [i] [j] << " ";

    cout << endl;
  }
  cout << "Suma wylosowanych liczb na przekatnej = " << suma << endl;
}

int main()
{
    czytaj_dane();
    przetworz_dane();
    wyswietl_wyniki();
    getch();
}
