#include<stdio.h>
int main()
{
    long long m, n, a, x, y;

    scanf("%lld %lld %lld", &m, &n, &a);

    if(m%a == 0)
        x = m/a;

    else
        x = m/a+1;

    if(n%a == 0)
        y = n/a;

    else
        y = n/a+1;

    printf("%lld\n", x*y);


    return 0;
}
