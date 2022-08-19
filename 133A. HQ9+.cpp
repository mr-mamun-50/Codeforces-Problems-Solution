#include<bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    int length = 0;

    cin>> p;
    length = p.length();

    for(int i=0; i<length; i++)
    {
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            cout<<"YES\n";
            return 0;
        }
    }

    cout<<"NO\n";



    return 0;
}
