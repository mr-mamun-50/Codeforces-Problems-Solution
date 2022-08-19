#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cin>>n;
    char s[n+10];
    cin>>s;

    int an=0, dn=0;
    for(i=0; i<n; i++)
    {
        if(s[i] == 'A')
            an++;
        else if(s[i] == 'D')
            dn++;
    }
    if(an > dn)
        cout<<"Anton"<<endl;
    if(an < dn)
        cout<<"Danik"<<endl;
    if(an == dn)
        cout<<"Friendship"<<endl;



    return 0;
}
