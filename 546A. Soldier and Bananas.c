#include<stdio.h>
int main()
{
    int k, n, w, ans;
    scanf("%d %d %d", &k, &n, &w);

    w = w * (w+1) / 2;
    ans = w * k - n;

    if(ans<0)
        ans = 0;

    printf("%d\n", ans);



    return 0;
}
