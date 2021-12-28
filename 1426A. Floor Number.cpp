#include<bits/stdc++.h>

#define mamun()         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl            '\n'
#define tab             '\t'
#define ll              long long
#define lli             long long int
#define pb              push_back
#define fin(file)       freopen(file".txt", "r", stdin)
#define fout(file)      freopen(file".txt", "w", stdout)
#define FOR(i, a, b)    for (int i=a; i<=b; i++)
#define loop(i, n)      for (int i=0; i<n; i++)
#define srt(v)          sort(v.begin(), v.end())
#define rsrt(v)         sort(v.rbegin(), v.rend())
#define Fill(ar, val)   memset(ar, val, sizeof(ar))
#define testcase()      ll t; cin>>t; while(t--)

using namespace std;

int main()
{
    mamun();
    //fin("input");

    testcase()
    {
        ll n, x;
        cin>> n >> x;
        vector<ll> v;

        for(ll i=3; i<=n; i++)
        {
            v.pb(i);
        }

        ll sz;
        if(v.size()%x == 0)
            sz = v.size()/x;
        else
            sz = (v.size()/x) + 1;

        cout<< sz + 1 << endl;

    }

    return 0;
}
