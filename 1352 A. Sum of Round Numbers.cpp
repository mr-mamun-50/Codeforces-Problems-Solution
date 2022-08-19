#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>> a;

    for(int i=0; i<a; i++)
    {
        vector<int> mun;

        int n, cnt=0;
        cin>> n;

        if(n%10 != 0)
        {
            mun.push_back(n%10);
        }
        int ans = n%10;
        n-=ans;

        if(n%100 != 0)
        {
            mun.push_back(n%100);
        }
        ans= n%100;
        n -= ans;

        if(n % 1000 != 0)
        {
            mun.push_back(n%1000);
        }
        ans = n%1000;
        n -= ans;

        if(n%10000 != 0)
        {
            mun.push_back(n%10000);
        }
        if(n>= 10000 && n%10000 == 0)
        {
            mun.push_back(n);
        }

        cout<< mun.size() << endl;

        for(int j=0; j<mun.size(); j++)
        {
            cout<< mun[j] << " ";
        }
        cout<< endl;


    }



    return 0;
}
