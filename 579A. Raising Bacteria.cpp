#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    mamun();

    ll x, n=0;
    cin >> x;

    while(x>=1)
    {
        if(x%2==1)
        {
            n++;
            x--;
        }
        else
        {
            x/=2;
        }
    }
    cout<< n << endl;

    return 0;
}
