#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>> n;

        if(n<6) n=6;
        if(n&1) n++;

        cout<< n/2*5 << endl;
    }


    return 0;
}

