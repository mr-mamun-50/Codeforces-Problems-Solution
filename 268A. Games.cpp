#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, cnt = 0;
    cin>> n;

    int a[n], b[n];

    for(int i=0; i<n; i++)
    {
        cin>> x>> y;
        a[i] = x;
        b[i] = y;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i] == b[j])
                cnt++;
        }
    }
    cout<< cnt<< endl;


    return 0;
}
