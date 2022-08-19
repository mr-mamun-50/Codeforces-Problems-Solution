#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
    char ch[100];
    int i, n, count=0, j;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        scanf("%s", &ch);

        if(strlen(ch) <= 10)
            cout<<ch<<endl;

        else if(strlen(ch) > 10)
        {
            int len = strlen(ch);
            cout<<ch[0]<< len-2 <<ch[strlen(ch) -1]<<endl;
        }
    }

    return 0;
}
