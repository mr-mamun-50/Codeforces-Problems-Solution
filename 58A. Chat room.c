#include<stdio.h>
#include<string.h>

int main()
{
    char s[101], m[6] = "hello";
    int i, j=0, pas = 0;

    scanf("%s", s);
    int len = strlen(s);

    for(i=0; i<len; i++)
    {
        if(s[i] == m[j])
        {
            j++;
            pas++;

            if(pas == 5)
                break;
        }
    }
    if(pas == 5)
        printf("YES\n");

    else
        printf("NO\n");


    return 0;
}
