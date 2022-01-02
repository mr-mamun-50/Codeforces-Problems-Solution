#include<bits/stdc++.h>

#define mamun()         ios_base::sync_with_stdio(0); //cin.tie(0); cout.tie(0);
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
    while(cin>> n)
    {
        ll i, a[n], one=0, sum=0, r;

        loop(i,n)
        {
            cin>> a[i];

            if(a[i] == 1)
                one++;
        }
        r=0;
        loop(i, n)
        {
            if(a[i] == 0)
                sum += 1;
            else
                sum -= 1;
            r = max(r, sum);

            if(sum < 0)
                sum = 0;
        }
        if(one == n)
            cout<< n-1 << endl;
        else
            cout<< one+r << endl;

    }

    return 0;
}

