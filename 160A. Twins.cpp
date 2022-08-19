#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, m, n, sum, result, cnt;

    while(cin>>n)
    {
        long long a[n];

        sum = 0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        sum = sum/2;
        sort(a, a+n);
        cnt = 0;
        result = 0;

        for(i=n-1; i>=0; i--)
        {
            result += a[i];
            cnt++;
            if(result > sum)
                break;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
