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

    testcase()
    {
        ll n;
        cin >> n;

        string s1, s2;
        cin >> s1 >> s2;
        bool check = true;

        loop(i, n) {
            if (s1[i] == s2[i]) {
                continue;
            }
            else if (s1[i] == 'B' && s2[i] == 'G' || s1[i] == 'G' && s2[i] == 'B') {
                continue;
            }
            else {
                check = false;
                break;
            }
        }

        if (check == true) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}