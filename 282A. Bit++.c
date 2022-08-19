#include<stdio.h>
#include<string.h>
int main()
{
    char x[10];
    int i, t, s=0;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%s", &x);

        if((strcmp(x, "X++") == 0)|| (strcmp(x, "++X") == 0))
        {
            s=s+1;
        }

        else if((strcmp(x, "X--") == 0)|| (strcmp(x, "--X") == 0))
        {
            s=s-1;
        }
        s=s;
    }
    printf("%d\n", s);

    return 0;
}
