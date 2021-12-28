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
        ll n, sum=0, odd=0, even=0;
        cin>> n;
        ll arr[n];

        loop(j, n)
        {
            cin>> arr[j];

            if(arr[j]%2!=0 || arr[j]==1)
                odd++;
            else
                even++;

            sum+=arr[j];
        }

        if(sum%2!=0 || sum==1)
            cout<< "YES" << endl;

        else{
            if(odd!=0 && even!=0)
                cout<< "YES" << endl;
            else
                cout<< "NO" << endl;
        }
    }

    return 0;
}
