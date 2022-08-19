#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    mamun();

    ll n, m=0, c=0;
    cin>> n;
    for(ll i=0; i<n; i++)
    {
        ll x, y;
        cin >> x >> y;

        if(x>y)
            m++;
        else if(x<y)
            c++;
    }
    if(m > c) cout << "Mishka" << endl;
    else if(c > m) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;

    return 0;
}
