//masz pi�� pude�ek, w ka�dym pude�ku mo�esz umie�ci� jedn� liczb� ca�kowit�
//z przedzia�u od 1 do 3 w��cznie.
// Napisz program, kt�ry wypisze na ekranie wszystkie mo�liwe kombinacje w jaki
//spos�b mo�na zape�ni� pude�ka

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
