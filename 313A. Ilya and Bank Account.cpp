#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    mamun();

    ll n;
    cin>> n;

    if(n>=0)
        cout<< n << endl;

    else
    {
        ll a = n / 10;
        ll b = n / 100 * 10 + n % 10;

        cout<< max(a, b) << endl;
    }

    return 0;
}
