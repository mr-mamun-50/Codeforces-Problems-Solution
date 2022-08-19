#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, y, cnt=0;

    cin>> n >> h;

    for(int i=0; i<n; i++)
    {
        cin>>y;

        if(y>h)
            cnt+=2;
        else
            cnt++;
    }
    cout<<cnt<<endl;




    return 0;
}
