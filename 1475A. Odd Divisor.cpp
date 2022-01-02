#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    mamun();

    ll t;
    cin>> t;
    while(t--)
    {
        float n;
        cin >> n;

        float x = n/2;

        if(x > 1 && x%(2 != 0){
            cout<< "YES" << x << endl;
        }
        else{
            cout<< "NO" << x << endl;
        }
    }



    return 0;
}
