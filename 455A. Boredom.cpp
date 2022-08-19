#include<bits/stdc++.h>
using namespace std;

#define MAX 100005
long long dp[100005];
long long cnt1[100005];

int main()
{
    int n, x;
    cin>> n;

    for(int i=0; i<n; i++)
    {
        cin>> x;
        cnt1[x]++;
    }
    dp[0] = 0;
    dp[1] = cnt1[1];

    for(int i=2; i<MAX; i++)
    {
        dp[i] = max(dp[i-1], dp[i-2]+i * cnt1[i]);
    }
    cout<< dp[MAX-1];

    return 0;
}
