#include<bits/stdc++.h>
using namespace std;

int main()
{
    int steps;
    int result = 0;

    cin>>steps;

    if(steps<5)
        cout<<1<<endl;

    else
    {
        if(steps % 5 == 0)
        {
            result = steps/5;
            cout<<result<<endl;
        }

        else if(steps > 5 && steps % 5 != 0)
        {
            result = (steps / 5) + 1;
            cout<<result<<endl;
        }
    }


    return 0;
}
