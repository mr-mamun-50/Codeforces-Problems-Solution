#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    mamun();

    ll n, q, tk;
    cin>> n;
    ll shop[n+1];

    for(ll i=0; i<n; i++)
    {
        cin>> shop[i];
    }

    cin>> q;
    sort(shop, shop+n);

    for(ll i=0; i<q; i++)
    {
        cin>> tk;

        ll ans = upper_bound(shop, shop+n, tk)-shop;
        cout<< ans << endl;
    }

    return 0;
}













