#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    long long ans = 0;
    int start, end, d;

    cin>> n >> m;
    start = 1;

    for(int i=0; i<m; i++)
    {
        cin>> end;

        d = end - start;

        if(d < 0)
            d += n;
        ans += d;
        start  = end;
    }

    cout<< ans<< endl;



    return 0;
}
