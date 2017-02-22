#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    int tab[N];

    for (int i=0; i<N; i++)
    {
        cin >> tab[i];
    }

        for (int j=(N-1); j>=0; j--)
    {
        cout << tab[j] << " ";
    }

    return 0;
}
