#include<stdio.h>
#include<string.h>

int main()
{
    char ch1[100], ch2[100];
    int i;

    scanf("%s %s", ch1, ch2);

    int len = strlen(ch1);

    for(i=0; i<len; i++)
    {
        if(ch1[i] >= 65 && ch1[i] <=90)
        {
            ch1[i] = 'a' + ch1[i] - 'A';
        }
    }

    for(i=0; i<len; i++)
    {
        if(ch2[i] >= 65 && ch2[i] <=90)
        {
            ch2[i] = 'a' + ch2[i] - 'A';
        }
    }

    char x = strcasecmp(ch1, ch2);

    if(x > 0)
        printf("1\n");

    else if(x<0)
        printf("-1\n");

    else
        printf("0\n");

    return 0;
}
