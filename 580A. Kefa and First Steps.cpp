#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, mx=0, cnt =1;

    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            if(cnt>mx)
                mx=cnt;
            cnt=1;
        }
        else
            cnt++;
    }
    if(cnt>mx)
        mx = cnt;

    cout<<mx<<endl;


    return 0;
}
