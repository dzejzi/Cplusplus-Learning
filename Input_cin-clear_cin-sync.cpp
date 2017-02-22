#include <iostream>

using namespace std;

int main()

{
    float pierwsza;
    float druga;
    float trzecia;
    bool p;
    bool d;
    bool t;

   cout << "Podaj liczbe pierwsza " ;
   cin >> pierwsza ;
   p = cin.good() ; //mozna zamienic na cin.fail()

   cin.clear(); cin.sync();

   cout << "Podaj liczbe druga " ;
   cin >> druga;
   d = cin.good() ;

   cin.clear(); cin.sync();

   cout << "Podaj liczbe trzecia " ;
   cin >> trzecia;
   t = cin.good();

   cin.clear(); cin.sync();


   cout << "Liczba pierwsza to " << pierwsza << ". Wczytano? " << p << endl;
   cout << "Liczba druga to " << druga << ". Wczytano? " << d << endl;
   cout << "Liczba trzecia to " << trzecia << ". Wczytano? " << t << endl;

   return 0;
   }
