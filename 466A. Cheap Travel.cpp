#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin>> n >> m >> a >> b;

    if(m * a > b)
    {
        int remain = (n%m)*a;

        if(remain > b)
        {
            cout<< n/m * b+b << endl;
        }
        else
            cout<< n/m * b+remain << endl;
    }
    else
        cout<< n * a <<endl;


    return 0;
}
