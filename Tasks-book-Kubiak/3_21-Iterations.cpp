#include<iostream>
using namespace std;

int main()
{
    cout << "Program wyswietla tabliczke mnozenia dla liczb od 1 do 100" << endl;
    int i = 1;
    while (i <= 10)
    {
     int j = 1;
     while (j <= 10)
     {
      cout << i * j << '\t';
      j++;
     }

     i++;
    }

    return 0;
}
