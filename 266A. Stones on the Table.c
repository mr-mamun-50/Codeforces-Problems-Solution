#include<stdio.h>
int main()
{
    int n, count =0;
    scanf("%d", &n);

    char s[n+10];
    scanf("%s", s);

    for(int i=0; i<n; i++)
    {
        if(s[i] == s[i+1])
            count++;
    }

    printf("%d\n", count);




    return 0;
}
