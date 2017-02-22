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
        a = stoi(S);
        cout << a << endl;
    }
    catch(exception e)
    {
        cout << "Bad String";
    }


    return 0;
}
