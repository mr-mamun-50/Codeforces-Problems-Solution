#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int s[x+10];

    for(int i=0; i<x; i++)
    {
        cin>>s[i];
    }
    int mn = s[0];
    int mx = s[0];

    for(int i=0; i<x; i++)
    {
        if(s[i] > mx)
            mx = s[i];
        if(s[i] < mn)
            mn = s[i];
    }

    cout<< ((mx -mn)+1)-x << endl;


    return 0;
}


