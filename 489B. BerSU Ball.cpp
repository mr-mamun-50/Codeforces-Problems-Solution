#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    mamun();

    ll n, m, cnt=0;
    cin>> n ;
    ll a[n];

    for(ll i=0; i<n; i++)
    {
        cin>> a[i];
    }
    sort(a, a+n);

    cin>> m;
    ll b[m];
    for(ll i=0; i<m; i++)
    {
        cin>> b[i];
    }
    sort(b, b+m);

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            if(abs(a[i] - b[j]) <= 1)
            {
                cnt++;
                b[j] = 10000;
                break;
            }
        }
    }
    cout<< cnt << endl;

    return 0;
}
