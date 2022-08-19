#include<stdio.h>
int main()
{
    int n, a, b, c=0, m=0;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);

        c -= a;
        c += b;

        if(c>m)
            m=c;
    }
    printf("%d\n", m);


    return 0;
}
