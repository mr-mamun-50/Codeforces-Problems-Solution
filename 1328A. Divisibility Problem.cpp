#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long a, b;
    cin>> n;

    for(long long i=0; i<n; i++)
    {
        cin>> a >> b;
        if(a % b == 0)
            cout<< "0" << endl;
        else
            cout<< b-(a%b) << endl;

    }



    return 0;
}
