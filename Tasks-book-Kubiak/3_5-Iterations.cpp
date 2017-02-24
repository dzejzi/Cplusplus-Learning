#include<iostream>
using namespace std;

int main()
{
    cout << "Program wyœwietla liczby calkowite od 1 do 20" << endl;
    int liczba = 1;
    do
    {
        cout << liczba << ", ";
        liczba++;
    } while (liczba <= 20 );
    return 0;
}
