#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>> t;

    while(t--)
    {
        int a;
        cin>> a;

        for(int i=2; i<10e9; i++)
        {
            int power = pow(2, i) - 1;
            if(a % power == 0)
            {
                cout<< a/power << endl;
                break;
            }
        }
    }


    return 0;
}
