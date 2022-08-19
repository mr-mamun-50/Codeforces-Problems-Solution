#include<stdio.h>
#include<string.h>

int main()
{
    char ch[101];
    int i, j, k;

    gets(ch);

    char result[101];

    int len = strlen(ch);

    for(i=0; i<len; i++)
    {
        char s = tolower(ch[i]);

        if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'y')
            continue;

        else
            printf(".%c", s);

    }
    printf("\n");

    return 0;
}
