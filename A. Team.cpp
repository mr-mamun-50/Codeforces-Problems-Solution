#include<iostream>
using namespace std;
int main()
{
    int n, x, y, z, i;
    int cnt=0;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>x>>y>>z;

        if((x==1 && y==1) || (x==1 && z==1) || (y==1 && z==1) || (x==1 && y==1 &&z==1))
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
