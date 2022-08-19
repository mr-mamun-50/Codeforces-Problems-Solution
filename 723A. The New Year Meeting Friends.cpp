#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mas[3];
    cin>> mas[0] >> mas[1] >> mas[2];

    sort(mas, mas+3);

    cout<< mas[2] - mas[0];


    return 0;
}
