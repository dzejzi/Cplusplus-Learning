#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string, int> phoneBook;
    int n;
    map<string, int>::iterator it;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int number;
        cin >> name >> number;
        phoneBook.insert({name, number});
    }

    string aa;
    while (cin >> aa)
    {
        it = phoneBook.find(aa);

        if (it != phoneBook.end())
          cout << it->first << "=" << it->second << endl;
        else
          cout << "Not found" << endl;


    }
    return 0;

}
