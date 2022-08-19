#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[110], ch1[110];

    cin>> ch >> ch1;
    int len = strlen(ch);

    for(int i=0; i< len; i++)
    {
        if(ch[i] == ch1[i])
            cout<<"0";
        else
            cout<<"1";
    }




    return 0;
}
