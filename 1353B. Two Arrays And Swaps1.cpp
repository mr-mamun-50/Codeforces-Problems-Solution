#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    mamun();

    ll t;
    cin>> t;

    while(t--)
    {
        ll n, k;
        cin>> n >> k;

        vector<ll> v(n);
        for( auto &u : v ) cin >> u;

        vector<ll> w(n);
        for( auto &u : w ) cin >> u;

        sort(v.begin(), v.end());
        sort(w.rbegin(), w.rend());

        ll ans=0;

        for(ll i=0; i<n; i++)
        {
            if(i<k) ans += max(v[i], w[i]);

            else ans += v[i];
        }
        cout<< ans << endl;
    }

    return 0;
}
