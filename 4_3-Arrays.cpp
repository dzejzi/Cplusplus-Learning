#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    const short ile = 10;
    int dane[ile] [ile];

    int suma = 0;
    for ( int w = 0; w < ile; w++)
        {
            for ( int k = 0; k < ile; k++)
            {
             if ( w == k)
             {
              dane [w] [k] = 1;
              suma += dane [w] [k];
             } else
             dane [w] [k] = 0;

             cout << dane [w] [k] << " ";
            }
        cout << endl;
        }
    cout << "Suma liczb na przekatnej = " << suma << endl;
    getch();

}

