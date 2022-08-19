#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, sum, res, c;

    while(cin>> n >> k)
    {
        res = 240 - k, sum = 0, c = 0;

        for(int i=1; i<=n; i++)
        {
            sum += 5 * i;

            if(sum > res)
                break;

            c++;
        }
        cout<< c << endl;
    }

    return 0;
}
