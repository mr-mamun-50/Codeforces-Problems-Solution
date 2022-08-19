#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    mamun();

    ll n;
    cin>>  n;
    while(n--)
    {
        ll n;
        cin>> n;
        ll a=0, b=0;

        for(ll i=0; i<n; i++)
        {
            ll x;
            cin>> x;
            if(x%2 != i%2)
            {
                if(i%2 == 0)
                    a++;
                else
                    b++;
            }
        }
        if(a!=b)
            cout<< -1 << endl;
        else
            cout<< a << endl;
    }

    return 0;
}
