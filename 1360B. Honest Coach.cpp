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
        ll n;
        cin>> n;

        vector<ll> v(n);
        for(auto &x : v)
            cin>> x;

        sort(v.begin(), v.end());

        ll res = v[n-1] - v[0];

        for(ll i=0; i<n; i++)
        {
            for(ll j=i+1; j<n; j++)
            {
                res = min(res, v[j] - v[i]);
            }
        }
        cout<< res << endl;
    }

    return 0;
}
