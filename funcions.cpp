#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int ile = 4; int ans;
    int tab[ile] = {a,b,c,d};
    ans = tab[0];
    for (int i=0; i<ile; i++)
    {
        if (tab[i]>ans)
         ans=tab[i];
    }
  return ans;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
