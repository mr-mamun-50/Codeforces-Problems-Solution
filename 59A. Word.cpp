#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[110];
    char ans;

    cin>>s;
    int len = strlen(s);
    int ca=0, sm=0;

    for(int i=0; i<len; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            ca++;

        else if(s[i] >= 'a' && s[i] <= 'z')
            sm++;
    }
    if(ca>sm)
    {
        for(int i=0; i<len; i++)
        {
            ans = toupper(s[i]);
            cout<<ans;
        }
    }

    else
    {
        for(int i=0; i<len; i++)
        {
            ans = tolower(s[i]);
            cout<<ans;
        }
    }



    return 0;
}
