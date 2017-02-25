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
    long long int summary = 0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       summary += arr[arr_i];
    }
    cout << summary;
    return 0;
}
