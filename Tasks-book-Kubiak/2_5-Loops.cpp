//moja wersja zadania:)
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>
using namespace std;

int main()
{
  cout << "Program losuje liczbe calkowita z przedzialu od 0 do 9" << endl;
  srand(time(NULL));
  int wylosowana = rand() % 10 + 0;
  int zgadywana;
  do
  {
   cin.clear();
   cin.sync();
   cout << "Zgadnij jaka liczbe wylosowal program ";
   cin >> zgadywana;
   if((zgadywana > 9) || (zgadywana < 0) )
   {
   cout << "Wprowadziles niepoprawna liczbe. Liczba ma miescic sie w przedziale od 0 do 9" << endl;
   } else
    {
      if (zgadywana > wylosowana)
      {
       cout << "Liczba wylosowana jest mniejsza niz podana przez Ciebie" << endl;
      }
       else
         {
          if (zgadywana < wylosowana)
          {
          cout << "Liczba wylosowana jest wieksza niz podana przez Ciebie" << endl;
          } else
            cout << "BRAWO!!! Odgadles wylosowana liczbe. Wylosowana liczba to: " << wylosowana << endl;
         }
    }

    } while ( wylosowana != zgadywana);

  getch();
}
