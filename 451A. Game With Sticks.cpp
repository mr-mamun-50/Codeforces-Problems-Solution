#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i;
    cin>> n >> m;

    if(n > m)
        i = m;
    else
        i = n;

    if(i % 2 == 0)
        cout<< "Malvika" << endl;
    else
        cout<< "Akshat" << endl;

    return 0;;
}
