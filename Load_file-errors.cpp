#include<iostream>
#include<string>
#include<fstream>
using namespace std;

bool wczytaj_liczby( string & nazwa_pliku )
{
   ifstream plik;
   plik.open( nazwa_pliku.c_str() );

   if ( !plik.good() )
   {
    cout << " Nie udalo sie otworzyc pliku ";
    return false;
   }

   int suma = 0;
   do
   {
    if ( plik.bad() )
        {
            cout << "Wystapil blad sprzetowy " << endl;
            plik.close();
            return false;
        }
    int iLiczba;
    plik >> iLiczba;

    if( plik.fail() )
    {
        plik.clear();
        char cZnak;
        plik >> cZnak;
        if( plik.fail() )
             break;
    } else
         cout << iLiczba << " ";
         suma += iLiczba;
    } while ( !plik.eof() );
  cout << endl;
  cout << "Suma liczb wynosi = " << suma << endl;
  plik.close();
}

int main()
{
    string nazwa_pliku = "zadanie.txt";
    wczytaj_liczby( nazwa_pliku );

    return 0;
}


// zadanie.txt
//a 1 2 321b9 ac.de ef#@g 5 #3
