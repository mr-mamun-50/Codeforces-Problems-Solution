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
        ll n, x, sum = 0, m=0;
        cin >> n >> x;
        deque<ll> v, v2;

        loop(i, n)
        {
            ll x;
            cin>> x;
            v.push_back(x);
        }

        while(!v.empty())
        {
            if(sum + v.front() == x && v.size() < 2)
            {
                m = 1;
                break;
            }
            else if(sum + v.front() == x)
            {
                ll w = v.back();
                v.pop_back();
                v.push_front(w);
            }
            else
            {
                sum += v.front();
                v2.push_back(v.front());
                v.pop_front();
            }
        }
        if(m == 1) cout  << "NO" << endl;
        else
        {
            cout  << "YES" << endl;
            loop(i, n)
            {
                cout<< v2.front() << " ";
                v2.pop_front();
            }
            cout<< endl;
        }

    }


    return 0;
}
