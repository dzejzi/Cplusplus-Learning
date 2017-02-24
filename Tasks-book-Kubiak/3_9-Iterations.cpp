#include<iostream>
using namespace std;

int main()
{
    cout << "Program sumuje liczby calkowite od 1 do 100" << endl;
    int suma = 0;
    int liczba = 1;
    while (liczba <= 100)
    {
        suma+= liczba;
        liczba++;
    }
    cout << "Suma liczb calkowitych od 1 do 100 wynosi: " << suma << endl;
    return 0;
}
