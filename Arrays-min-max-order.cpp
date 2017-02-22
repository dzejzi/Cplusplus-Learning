#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void wylosujLiczby( int tab[], int ile)
{
    for ( int i=0; i < ile; i++)
    {
    int liczba = (rand() % 21) + 10;
    tab[ i ] = liczba;
    }
}

void wypiszTablice( int taba[], int ilea)
{
   for ( int i=0; i < ilea; i++)
    {
    cout <<  taba[ i ] << ", ";
    }
}

void wypiszTabliceOdTylu( int tabb[], unsigned int ileb)
{
    for ( int i = 9 ; (i < ileb ); i-- )
    {
    cout <<  tabb[ i ] << ", ";
    }
}

int znajdzMinimum( int tabc[], int ilec)
{
    int najmniejszy = tabc[ 0 ]; //ustalamy, ¿e najmniejsz¹ wartoœci¹ jest
                            //(póki co) pierwszy element tablicy
    for ( int i = 0; i < ilec; i++)
    {
        if( tabc[ i ] < najmniejszy )
         najmniejszy = tabc[ i ]; //jeœli sprawdzany element tablicy jest
                                // mniejszy od tego (dotychczas) najmniejszego,
                                //to on staje siê tym najmniejszym
    }
    return najmniejszy;
}

int znajdzMaksimum( int tabd[], int iled)
{
    int najwiekszy = tabd[ 0 ];
    for ( int i = 0; i < iled; i++)
    {
        if( tabd[ i ] > najwiekszy )
         najwiekszy = tabd[ i ];
    }
    return najwiekszy;
}

void wypiszMinMax ( int a , int b)
{
 cout << a << " , " << b << endl;
}

int main()
{
    srand( time( NULL ));
    int tablica[ 10 ];
    wylosujLiczby( tablica, 10 );
    wypiszTablice( tablica, 10 );
    cout << endl;
    wypiszTabliceOdTylu( tablica, 10 );
    cout << endl;
    int iMin = znajdzMinimum( tablica, 10 );
    int iMax = znajdzMaksimum( tablica, 10 );
    wypiszMinMax( iMin, iMax );
    return 0;
}
