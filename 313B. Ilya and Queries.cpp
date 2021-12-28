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

    ll a[100005], cnt=0;
    string s;
    cin>> s;

    FOR(i, 1, s.size())
    {
        if(s[i] == s[i-1]) cnt++;
        a[i] = cnt;
    }

    testcase()
    {
        ll l, r;
        cin>> l >> r;

        cout<< a[r-1] - a[l-1] << endl;
    }


    return 0;
}
