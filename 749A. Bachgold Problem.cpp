#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    mamun();

    ll b;
    cin >> b;
    cout<< b/2 << endl;

    if(b % 2 == 0)
    {
        for(ll i=0; i<b/2-1; i++)
        {
            cout<< "2 " ;
        }
        cout<< "2" <<endl;
    }
    if(b % 2 == 1)
    {
        for(ll i=0; i<b/2-1; i++)
        {
            cout<< "2 " ;
        }
        cout<< "3" << endl;
    }

    return 0;
}
