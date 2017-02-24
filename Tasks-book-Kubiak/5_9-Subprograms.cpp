#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

float oblicz (float a)
{
    float oblicz;
    oblicz = a*a+1;
    return oblicz;
}
int main()
{
 cout << "x" << '\t' << "y" << endl;
 cout << "==============" << endl;
 short n = 10;
 float x=0;
 float y;
 float krok = 0.5;
 for (int i = 0; i<= n; i++)
 {
     y= oblicz(x);
     cout << fixed << setprecision(2);
     cout << x << '\t' << y << endl;
     x = x + krok;
 }
 getch();
}
