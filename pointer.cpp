#include <stdio.h>

void update(int *a,int *b)
{
    int a1 = *a;
    int *w_a1 = &a1;

    *a = *a + *b;

    if( (a1-*b) >= 0)
        *b = a1-*b;
        else
            *b = -(a1 - *b);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
