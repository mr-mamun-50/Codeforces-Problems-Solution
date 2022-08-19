#include <stdio.h>
#include <string.h>
int main ()
{
    char s[1000];
    int i, j = 0, k, l, ln, arr[1000], m, n, temp;
    scanf("%s", s);
    ln = strlen(s);
    for(i = 0; i < ln; i++)
    {
        if((i % 2) == 0)
        {
            arr[j] = (int) s[i];
            j++;
        }
    }
    for(m = 1; m < j; m++)
    {
        for(n = 0; n < (j - m); n++)
        {
            if(arr[n] > arr[n + 1])
            {
                temp = arr[n];
                arr[n] = arr[n + 1];
                arr[n + 1] = temp;
            }
        }
    }
    for(k = 0; k < j; k++)
    {
        if(k == (j - 1))
        {
            printf("%c", (char) arr[k]);
        }
        else
        {
            printf("%c%c", (char) arr[k], '+');
        }
    }
    printf("\n");

    return 0;
}
