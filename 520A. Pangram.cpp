#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    char str[n+5];
    char rc = 0, rs = 0, cnt = 0;
    cin>> str;

    if(n < 26)
        cout<< "NO\n";

    else
    {
        for(int i=65, j=97; i<=90, j<=122; i++, j++)
        {
            rc = i;
            rs = j;
            for(int k = 0; k<n; k++)
            {
                if(str[k] == rc || str[k] == rs)
                {
                    cnt++;
                    break;
                }
            }
        }
        if(cnt >= 26)
            cout<< "YES\n";
        else
            cout<< "NO\n";
    }


    return 0;
}
