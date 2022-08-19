#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    mamun();

    int t;
    cin>> t;
    while(t--)
    {
        int x, y, n, res=0, r=0, p=0;
        cin>> x >> y >> n;

            r = n/x;
            p = r*x+y;

            if(p>n)
            {
                p-=x;
            }
        cout<< p << endl;
    }

    return 0;
}
