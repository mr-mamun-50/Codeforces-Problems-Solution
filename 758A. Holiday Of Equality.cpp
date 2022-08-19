#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, i, sum=0;
    cin>> n;
    int a[n];

    for(int i=0; i<n; i++) cin>> a[i];

    sort(a, a+n);

    for(int i=0; i<n; i++) sum += a[i];

    cout<< a[n-1] * n-sum;


    return 0;
}
