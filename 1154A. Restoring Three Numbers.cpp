#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4], a, b, c, i;

    while(cin>> arr[0] >> arr[1] >> arr[2] >> arr[3])
    {
        sort(arr, arr+4);
        a = arr[3] - arr[0];
        b = arr[3] - arr[2];
        c = arr[3] - arr[1];

        cout<< a << " " << b << " " << c << endl;
    }



    return 0;
}
