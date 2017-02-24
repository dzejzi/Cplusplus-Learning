#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    const short n = 10;
    int taba[n] [n];
    int tabb[n] [n];
    int w, k;

    for (int w = 0; w < n; w++)
    {
        for (int k = 0; k < n; k++)
            {
                taba[w] [k] = k ;
                cout << taba[w] [k] << " ";
            }
    cout << endl;
    }

cout << endl << endl;

   for (int w = 0; w < n; w++)
    {
        for (int k = 0; k < n; k++)
            {
                tabb[w] [k] = taba[k] [w] ;
                cout << tabb[w] [k] << " ";
            }
    cout << endl;
    }

    getch();
}

