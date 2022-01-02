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

    ll n;
    cin>> n;
    vector<ll> v1(n), v2(n-1), v3(n-2);

    loop(i, n) cin>> v1[i];
    loop(i, n-1) cin>> v2[i];
    loop(i, n-2) cin>> v3[i];

    srt(v1);
    srt(v2);
    srt(v3);

    loop(i, n)
    {
        if(v1[i] != v2[i])
        {
            cout<< v1[i] << endl;
            break;
        }
    }
    loop(i, n-1)
    {
        if(v2[i] != v3[i])
        {
            cout<< v2[i] << endl;
            break;
        }
    }


    return 0;
}
