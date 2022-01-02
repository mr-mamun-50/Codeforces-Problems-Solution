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
#define srt(a, n)       sort(a, a+n)
#define Fill(ar, val)   memset(ar, val, sizeof(ar))
#define testcase()      ll t; cin>>t; while(t--)

using namespace std;

int main()
{
    mamun();
    //fin("input");

    testcase()
    {
        ll n, r=0, a=0;
        cin>> n;

        for(ll i=1;; i++)
        {
            if(n == 1) break;

            else if(n%6 == 0)
            {
                n /= 6;
                r = i;
                a=0;
            }
            else if(a == 0)
            {
                n *= 2;
                r = i;
                a=1;
            }
            else
            {
                r = -1;
                break;
            }
        }
        cout<< r << endl;
    }


    return 0;
}
