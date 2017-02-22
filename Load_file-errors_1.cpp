#include <iostream>
#include <fstream>
#include <string>

bool czyNapotkanoZnakNowegoWiersza( std::ifstream & plik )
{
    char cZnak;
    for(;; ) //nieskoñczona pêtla
    {
        plik.clear();
        cZnak = plik.peek(); //sprawdzamy jaki kolejny znak zostanie zwrócony przez operacjê odczytu
        if( plik.fail() || plik.bad() )
             return false; //wyst¹pi³ b³¹d odczytu danych

        if( !isspace( cZnak ) )
             return false; //pobrany znak nie jest bia³ym znakiem

        plik.get( cZnak ); //odczytujemy bia³y znak z pliku
        if( plik.fail() || plik.bad() )
             return false; //wyst¹pi³ b³¹d odczytu danych

        if( cZnak == '\n' )
             return true;

    } //for
}

bool odczytajPlik( std::string sNazwaPliku )
{
    std::ifstream plik;
    plik.open( sNazwaPliku.c_str() );
    if( !plik.good() )
         return false;

    int liczba, suma = 0, wiersz = 1;
    std::string linia;
    while( !plik.eof() )
    {
        plik >> liczba;
        if( plik.fail() )
        {
            suma = 0;
            std::cout << "Bledne dane w wierszu " << wiersz << "!" << std::endl;
            plik.clear();
            std::getline( plik, linia );
            wiersz++;
        }
        else
        {
            suma += liczba;
            if( czyNapotkanoZnakNowegoWiersza( plik ) )
            {
                wiersz++;
                std::cout << suma << std::endl;
                suma = 0;
            }
        }
    }
    plik.close();
    return true;
}

int main()
{
    if( !odczytajPlik( "zadanie1.txt" ) )
         std::cout << "Nie udalo sie odczytac pliku!" << std::endl;

    return 0;
}

// zadanie1.txt
/*
1 2 3
3 4 a 5
3 2
5 2 2 1 3
# 3 4
*/
