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
        ll n, p1 = 0;
        cin >> n;

        string str[3][n];
        map <string, int> mp;
        loop(i, 3) {
            loop(j, n) {
                cin >> str[i][j];
                mp[str[i][j]]++;
            }
        }
        loop(i, 3) {
            p1 = 0;
            loop(j, n) {
                if (mp[str[i][j]] == 1) {
                    p1 += 3;
                }
                else if (mp[str[i][j]] == 2) {
                    p1++;
                }
            }

            cout << p1 << " ";
        }
        cout << endl;
    }

    return 0;
}