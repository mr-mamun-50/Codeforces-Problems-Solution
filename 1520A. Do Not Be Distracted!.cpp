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
        ll n, cnt;
        cin >> n;
        string s;
        cin>> s;
        vector<char> v1, v2;

        loop(i, n)
        {
            v1.push_back(s[i]);
        }
        ll sz = unique(v1.begin(), v1.end()) - v1.begin();

        for(ll i=0; i<sz; i++)
        {
            cnt=0;
            loop(j, sz)
            {
                if(v1[i] == v1[j])
                    cnt++;
            }
            if(cnt >1) break;
        }
        if(cnt > 1) cout<< "NO" << endl;
        else cout<< "YES" << endl;
    }

    return 0;
}

