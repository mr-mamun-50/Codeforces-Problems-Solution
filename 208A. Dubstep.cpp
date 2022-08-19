#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ch;
    cin>> ch;

    for(int i=0; i<ch.size();)
    {
        if(ch[i]=='W' && ch[i+1]=='U' && ch[i+2]=='B')
        {
            cout<<" ";
            i+=3;
            continue;
        }

        else
        {
            cout<<ch[i];
            i++;
        }

    }



}
