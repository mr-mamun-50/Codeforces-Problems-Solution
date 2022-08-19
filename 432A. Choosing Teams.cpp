#include<bits/stdc++.h>
using namespace std;

int n, k, persons, valids;
int main()
{

    cin>> n >> k;

    for(int i=0; i<n; i++)
    {
        cin>> persons;

        if(persons + k <= 5)
        {
            valids++;
        }
    }
    cout<< valids/3 << endl;


    return 0;
}
