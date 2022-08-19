#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    mamun();

    ll t;
    cin >> t;
    while(t--)
    {
        ll a, b, result;
        cin>> a >> b;

        if(b > a)
        {
            ll tmp = a;
            a = b;
            b = tmp;
        }

        if(a == b)
        {
            result = (a*2)*(b*2);
        }
        else
        {
            if(b*2 == a)
            {
                result = a*a;
            }
            else if(b*2 > a)
            {
                while(a!=b*2)
                {
                    a++;
                }
                result = a*a;
            }
            else if(b*2 < a)
            {
                result = a*a;
            }
        }
        cout<< result << endl;
    }

    return 0;
}
