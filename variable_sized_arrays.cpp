#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n, q;
    cin >> n >> q;

    int *tab[n];
    for (int i=0; i<n; i++)
    {
        int l;
        cin>>l;
        tab[i] = new int[l];
            for (int j=0; j<l; j++)
                cin >> tab [i] [j];
    }
    for (int i=0; i<q; i++)
    {
        int a,b;
        cin >> a>>b;
        cout << tab [a] [b] << endl;
    }
    return 0;
}
