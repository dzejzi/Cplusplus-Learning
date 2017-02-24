#include<iostream>
using namespace std;

int main()
{
    cout << "Program sumuje liczby calkowite od 1 do 100" << endl;
    int suma = 0;
    int liczba = 1;
    do
    {
        suma+= liczba;
        liczba++;
    } while (liczba <= 100);
    cout << "Suma liczb calkowitych od 1 do 100 wynosi: " << suma << endl;
    return 0;
}
