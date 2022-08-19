#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    int maxval = 0, maxind = 0, minval = 1000, minind = 0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x > maxval)
        {
            maxind = i;
            maxval = x;
        }
        if(x <= minval)
        {
            minind = i;
            minval = x;
        }
    }
    if(maxind > minind)
    {
        cout<< (maxind - 1) + (n - minind) - 1;
    }
    else
    {
        cout<< (maxind - 1) + (n - minind);
    }


    return 0;
}
