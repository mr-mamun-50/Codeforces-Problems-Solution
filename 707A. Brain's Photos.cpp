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

    ll n, m, cnt=0;
    cin>> n >> m;
    vector<char> v(n*m);

    loop(i, n*m)
    {
        cin>> v[i];


        if(v[i]=='C' || v[i]=='M' || v[i]=='Y')
            cnt=1;
    }

    if(cnt == 1)
        cout<< "#Color" << endl;

    else
        cout<< "#Black&White" << endl;


    return 0;
}

