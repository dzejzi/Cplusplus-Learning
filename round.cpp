#include<iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
double meal;
int tip, tax, total;

cin >> meal >> tip >> tax;

tip = round(meal * tip/100);
tax = round(meal *  tax/100);
total = meal + tip + tax;
cout << "The total meal cost is " << total << " dollars.";


return 0;
}
