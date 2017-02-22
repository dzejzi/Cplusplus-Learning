//masz piêæ pude³ek, w ka¿dym pude³ku mo¿esz umieœciæ jedn¹ liczbê ca³kowit¹
//z przedzia³u od 1 do 3 w³¹cznie.
// Napisz program, który wypisze na ekranie wszystkie mo¿liwe kombinacje w jaki
//sposób mo¿na zape³niæ pude³ka

#include<iostream>
using namespace std;

int main()
{
    for ( int a = 1; a <=3; a++)
    {
        //cout << a << a << a << a << a << endl;-tylko sprawdzam co wychodzi
        for ( int b = 1; b <=3; b ++)
        {
         //cout << a << a << a << a << b << endl;
         for ( int c = 1; c <= 3; c++)
         {
          //cout << a << a << a << b << c << endl;
          for ( int d = 1; d <= 3; d++)
          {
            //cout << a << a << b << c << d << endl;
            for ( int e = 1; e <= 3; e++)
            cout << a << b << c << d << e << endl;

          }

         }

        }

    }



    return 0;
}
