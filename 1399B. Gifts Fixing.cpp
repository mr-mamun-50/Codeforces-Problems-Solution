#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    mamun();

    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>> n;
        vector<ll> a(n), b(n);
        for(auto &u:a) cin>> u;
        for(auto &u:b) cin>> u;

        ll mia = *min_element(a.begin(), a.end());
        ll mib = *min_element(b.begin(), b.end());

        ll res = 0;

        for(ll i=0; i<n; i++)
        {
            res += max(a[i] - mia, b[i] - mib);
        }
        cout<< res << endl;
    }

    return 0;
}
