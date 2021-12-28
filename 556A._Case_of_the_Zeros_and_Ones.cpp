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
    // fin("input");

    ll cnt0=0, cnt1=0, n;
    cin>> n;
    char s[n];
    cin>> s;

    loop(i, n){
        if(s[i] == '0'){
            cnt0++;
        }
        else if(s[i] == '1'){
            cnt1++;
        }
    }
    cnt0 = min(cnt0, cnt1);

    cout<< n-(2*cnt0) << endl;

    return 0;
}
