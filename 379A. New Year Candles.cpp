#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    mamun();

    ll a, b, x, y;
    cin>> a >> b;
    ll h=a;

    while(a >= b)
    {
        x = a / b;
        h += x;
        y = a % b;
        a = x + y;
    }
    cout<< h << endl;

    return 0;
}
