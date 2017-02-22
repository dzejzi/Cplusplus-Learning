#include<iostream>
using namespace std;
int main()
{
    cout << "Program sumuje liczby parzyste od 1 do 100" << endl;
    int suma = 0;
    for (int liczba = 1; liczba <= 100; liczba++)
    {
        if ( (liczba % 2) == 0 )
        {
         suma+= liczba;
        }

    }
    cout << "Suma liczb parzystych od 1 do 100 wynosi: " << suma << endl;
    return 0;
}
