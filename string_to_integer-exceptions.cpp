#include <string>
#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
using namespace std;


int main(){
    string S;
    cin >> S;

    try
    {
      unsigned int a;
      a = atoi (S.c_str()) ;
      cout << a;
    }
    catch (exception b)
    {
        cout << "Bad String";
    }


    return 0;
}
