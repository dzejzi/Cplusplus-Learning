/*
masz piêæ pi³ek i chcesz wylosowaæ trzy z nich.
Napisz program, który wypisze na ekranie wszystkie mo¿liwe
 kombinacje pi³ek jakie mo¿na wylosowaæ
*/
#include<iostream>
using namespace std;

int main()
{
    for ( int a = 1; a <= 5; a++)
    {

        for ( int b = 1; b < a; b ++)
       // if ( a != b )
        {

         for ( int c = 1; c < b; c++)
         //if ( (a != c) && (b != c))
          cout << c << b << a << endl;
        }

    }


    return 0;
}
