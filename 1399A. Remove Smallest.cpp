#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &it : a) cin >> it;
        sort(a.begin(), a.end());
        bool ok = true;
        for (int i = 1; i < n; ++i)
        {
            ok &= (a[i] - a[i - 1] <= 1);
        }
        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}
