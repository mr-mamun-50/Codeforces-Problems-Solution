#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[110], s2[110], s3[110];

    cin>>s1>>s2;

    strcpy(s3, s1);
    strrev(s3);

    if(strcmp(s3, s2) == 0)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;



    return 0;
}
