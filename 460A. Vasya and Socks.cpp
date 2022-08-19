#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';
typedef long long ll;

int main()
{
    mamun();

    ll n, m;

    cin>> n >> m;

    for(int i=1; m*i <= n; i++)
    {
        n++;
    }
    cout<< n;



    return 0;
}
