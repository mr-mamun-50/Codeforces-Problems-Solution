#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];

    gets(s);
    int n = strlen(s);
    int condition = 1;

    for(int i=1; i<=n; i++)
    {
        if(s[i] == s[i-1])
        {
            condition++;

            if(condition == 7)
            {
                printf("YES\n");
                return 0;
            }
        }
        else
            condition = 1;
    }
    printf("NO\n");


    return 0;
}
