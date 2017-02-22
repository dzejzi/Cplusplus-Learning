#include<iostream>
using namespace std;
int main()
{
    cout << "Program sumuje liczby parzyste od 1 do 100" << endl;
    int liczba = 1;
    int suma = 0;
    while (liczba <= 100)
    {
        if ( (liczba % 2) == 0 )
        {
         suma+= liczba;
        }
    liczba++;
    }
    cout << "Suma liczb parzystych od 1 do 100 wynosi: " << suma << endl;
    return 0;
}
