#include<iostream>
using namespace std;

int main()
{
    cout << "Program wyswietla tabliczke mnozenia dla liczb od 1 do 100" << endl;
    int i = 1;
    do
    {
     int j = 1;
     do
     {
      cout << i * j << '\t';
      j++;
     } while (j <= 10);

     i++;
    } while (i <= 10);

    return 0;
}
