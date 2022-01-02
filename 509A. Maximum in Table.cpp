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
#define Fill(ar, val)   memset(ar, val, sizeof(ar))
#define testcase()      ll t; cin>>t; while(t--)

using namespace std;

int main()
{
    mamun();
    //fin("input");

    ll n;
    cin  >> n;
    ll v[n][n];

    loop(i, n)
    {
        loop(j, n)
        {
            v[i][0] = 1;
            v[0][j] = 1;
        }
    }
    for(ll i=1; i<n; i++)
    {
        for(ll j=1;  j<n; j++)
        {
            v[i][j] = v[i-1][j] + v[i][j-1];
        }
    }

    cout<< v[n-1][n-1] <<endl;


    return 0;
}
