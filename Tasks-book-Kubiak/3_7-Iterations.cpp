#include<iostream>
using namespace std;

int main()
{
    cout << "Program sumuje liczby calkowite od 1 do 100" << endl;
    int suma = 0;
    for (int liczba = 1; liczba <= 100; liczba++)
    {
        suma+= liczba;
    }
    cout << "Suma liczb calkowitych od 1 do 100 wynosi: " << suma << endl;
    return 0;
}
