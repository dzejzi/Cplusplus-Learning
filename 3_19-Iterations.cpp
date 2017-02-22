#include<iostream>
using namespace std;

int main()
{
    cout << "Program wyswietla tabliczke mnozenia dla liczb od 1 do 100" << endl;
    for ( int i = 1; i <= 10; i++)
    {
     for (int j = 1; j <= 10; j++)
     cout << i * j << '\t';
    }

    return 0;
}

//strona 50
