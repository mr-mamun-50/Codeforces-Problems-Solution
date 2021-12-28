#include <bits/stdc++.h>
#define ll long long;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        long double sum = 0;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            mx = max(mx, a[i]);
        }
        cout << fixed << setprecision(15) << mx + (sum-mx)/(n-1) << endl;

    }


    return 0;
}
