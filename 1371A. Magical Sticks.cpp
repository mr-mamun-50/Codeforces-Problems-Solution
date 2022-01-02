#include<bits/stdc++.h>

#define mamun()         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl            '\n'
#define tab             '\t'
#define ll              long long
#define lli             long long int
#define pb              push_back
#define fin(file)       freopen(file".txt", "r", stdin)
#define fout(file)      freopen(file".txt", "w", stdout)
#define FOR(i, a, b)    for (long long i=a; i<=b; i++)
#define loop(i, n)      for (long long i=0; i<n; i++)
#define srt(a, n)       sort(a, a+n)
#define Fill(ar, val)   memset(ar, val, sizeof(ar))

using namespace std;

int main()
{
    mamun();
    //fin("input");

    ll t;
    cin>> t;
    while(t--)
    {
        ll n, r=0;

        cin>>n;
        r = n/2;

        if(n % 2 == 1) r++;

        cout<< r << endl;
    }

    return 0;
}
