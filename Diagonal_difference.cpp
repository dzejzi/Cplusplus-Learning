#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int summary1 = 0;
    int summary2 = 0;
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++)
        {
            if (a_i == a_j)
            summary1 += a[a_i][a_j];

            if( (a_i+a_j) == (n-1)  )
            summary2 += a[a_i][a_j];
        }
    }
    // cout << summary1 << " " <<summary2<< endl;
    cout << abs(summary1-summary2);
    return 0;
}
