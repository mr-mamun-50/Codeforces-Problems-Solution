#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[101];

    cin>>s;
    int n = strlen(s);

    for(int i=1; i<n; i++)
    {
        if(s[i] >= 'a' && s[i]<='z')
        {
            cout<<s<<endl;
            return 0;
        }
    }


    for(int i=0; i<n; i++)
    {
        if(s[i] >= 'A' && s[i]<='Z' && s[0] >= 'A' && s[0]<='Z')
        {
            for(int j=0; j<n; j++)
            {
                char lc = tolower(s[j]);
                cout<<lc;
            }
            cout<<endl;
            return 0;
        }
    }



    char fs = toupper(s[0]);

    cout<<fs;

    for(int i=1; i<n; i++)
    {
        char ls = tolower(s[i]);
        cout<<ls;
    }
    cout<<endl;




    return 0;
}
