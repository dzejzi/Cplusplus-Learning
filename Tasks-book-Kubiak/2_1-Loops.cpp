#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    cout << "Program sprawdza czy dla trzech bokow trojkata a, b, c, jest on prostokatny" << endl;
    unsigned int a, b, c;
    cout << "Wprowadz dlugosci bokow prostokata" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    unsigned int a2 = a * a ; //cout << a2;
    unsigned int b2 = b * b ; // cout << b2;
    unsigned int c2 = c * c ; //cout << c2;




    if ( ((a2 + b2) == c2) || (( b2 + c2) == a2 ) || ( (c2 + a2) == b2) )
        cout << "Trojkat jest trojkatem prostokatnym ";
    else
        cout << "Trojkat NIE jest trojkatem prostokatnym";

    return 0;
}
