#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cout << "Size: ";
    cin >> n;

    vector<int> a(n);

    cout << "Array: ";
    for(int a_i = 0;a_i < n;a_i++)
       cin >> a[a_i];



    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - 1; j++)
        {
          if (a[j] > a[j + 1])
          swap(a[j], a[j + 1]);
        }

    }

    cout << "Sorted array: ";
   for(int a_i = 0;a_i < n;a_i++)
       cout<< a[a_i] << " ";

    return 0;
}
