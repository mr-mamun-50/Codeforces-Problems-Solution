#include<bits/stdc++.h>
using namespace std;


int call(int n, int cnt)
{
    if(cnt == 0)
        return n;

    if(n%10 != 0)
        call(n-1, cnt-1);

    else
        call(n/10, cnt-1);
}

int main()
{
    int n, k;

    cin>>n>>k;

    cout<<call(n, k)<<endl;


    return 0;
}
