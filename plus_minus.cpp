#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    float positive = 0, negative = 0, zeros = 0;
    for(int arr_i = 0;arr_i < n;arr_i++)
    {
       if ( arr[arr_i] > 0)
       positive++;

        if(arr[arr_i] < 0)
        negative++;

        if (arr[arr_i] == 0)
            zeros++;
    }
    cout << fixed ;
    cout << positive/n << endl;
    cout << negative/n << endl;
    cout << zeros/n << endl;

    return 0;
}
