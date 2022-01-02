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

using namespace std;

int main()
{
    mamun();

    ll n, m, cnt=0, x;
    cin>> n >> m;

    while(m != n)
    {
        if(m > n)
        {
            if(m % 2 == 0)
            {
                m /= 2;
                cnt++;
            }
            else
            {
                m++;
                cnt++;
            }
        }
        else if(n > m)
        {
            m++;
            cnt++;
        }
    }

    cout<< cnt << endl;

    return 0;
}
