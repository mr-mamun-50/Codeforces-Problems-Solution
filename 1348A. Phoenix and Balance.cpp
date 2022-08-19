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
        cin >> n;

        ll s1 = pow(2, n), s2 = 0;
        for(ll i=1; i<n/2; i++)
        {
            s1 += pow(2, i);
        }
        for(ll i = n/2; i<n; i++)
        {
            s2 += pow(2, i);
        }

        cout<< s1 - s2 << endl;
    }

    return 0;
}
