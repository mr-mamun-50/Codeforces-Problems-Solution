#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int w, h, n, W=1, H=1;
        cin>> w >> h >> n;

        while(w%2 == 0 && w>0)
        {
            W *= 2;
            w /= 2;
        }
        while(h%2 == 0 && h>0)
        {
            H *= 2;
            h /= 2;
        }
        if(W*H >= n)
            cout<< "YES" << endl;
        else
            cout<< "NO" << endl;
    }


    return 0;
}
