#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n+10];
    bool f=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i] == 1)
            f=1;
    }
    if(f==0)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;


    return 0;
}
