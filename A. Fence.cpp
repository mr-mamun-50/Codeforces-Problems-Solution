#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        long long int a, b, c;

        cin>>a>>b>>c;

        cout<<a+b+c-1<<endl;
    }
    return 0;
}
