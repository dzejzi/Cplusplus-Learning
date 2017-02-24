#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    const short ile = 10;
    int tablica [ile] [ile];
    int suma1 = 0;
    int suma2 = 0;
    for (int w = 0; w < ile; w++)
    {
        for (int k = 0; k < ile; k++)
        {
            if ( k == 0)
            {
            tablica [w] [k] = w;
            suma1 += tablica [w] [k];
            }else
                {
                if ( k == 1)
                    {
                    tablica [w] [k] = w*w;
                    suma2 += tablica [w] [k];
                    } else
                        {
                        tablica [w] [k] = 0;
                        }

                }
        cout <<  tablica [w] [k] << '\t';
        }
    cout << endl;
    }

    cout << "Suma liczb w pierwszej kolumnie = " << suma1 << endl;
    cout << "Suma liczb w drugiej kolumnie = " << suma2 << endl;

    getch();
}
