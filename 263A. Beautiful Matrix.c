#include<stdio.h>
#include<math.h>

int main()
{
    int x, y, i, j, a[5][5], ans;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    ans = abs(x-2) + abs(y-2);
    printf("%d\n", ans);

    return 0;
}
