#include<bits/stdc++.h>
#define mamun() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl    '\n'
#define ll      long long
using namespace std;

int main()
{
    mamun();

    ll t, n, m;
    cin>> t;
    while(t--)
    {
        cin>> n >> m;
        if(n == 1)
        {
            cout<< 0 << endl;
            continue;
        }
        if(n == 2)
        {
            cout<< m << endl;
            continue;
        }
        if(n > 2)
        {
            cout<< m*2 << endl;
        }
    }

    return 0;
}
