#include<bits/stdc++.h>

int main()
{
    int n;

    scanf("%d", &n);

    bool flag=0;

    int arr[12] = {4, 7, 47, 74, 44, 444, 447, 474, 477, 777, 774, 744};

    for(int i=0; i<12; i++)
    {
        if(n % arr[i] == 0)
        {
            flag = true;
        }
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}

