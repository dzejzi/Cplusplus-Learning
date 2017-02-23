#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic
{
    public:
        virtual int divisorSum(int n)=0;
};

class Calculator:public AdvancedArithmetic
{
    int n;
 public:
    Calculator()
    {
        int n;
        this->n = n;
    }
    virtual int divisorSum(int n) override
    {
        int summary=0;
         for(int i=1;i<=n;i++)
            {
                if (n % i ==0)
                {
                   summary += i;
                }
            }
       return summary;
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator();
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
