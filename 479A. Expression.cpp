#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a >> b>>c;

    int r1 = a + b * c;
    int r2 = a * (b+c);
    int r3 = a * b * c;
    int r4 = (a+b) * c;
    int r5 = a + b + c;
    int r6 = a * b + c;

    cout<< max(r1, max(r2, max(r3, max(r4, max(r5, r6))))) <<endl;


    return 0;
}
