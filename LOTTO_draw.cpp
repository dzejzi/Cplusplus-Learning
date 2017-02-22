#include<iostream>
using namespace std;

int main()
{
    int suma = 0;

    for ( int a = 1; a <= 49; a++)
    {
        for ( int b = 1; b < a; b ++)
        {
            for ( int c = 1; c < b; c++)
            {
                for ( int d = 1; d < c; d++)
                {
                    for ( int e = 1; e < d; e++)
                    {
                     for ( int f = 1; f < e; f++)
                     //cout << f << e << d << c << b << a << endl;
                     suma++;
                    // cout << suma << endl;
                    }
                }
            }

        }

    }

    cout << suma << endl;

    return 0;
}

