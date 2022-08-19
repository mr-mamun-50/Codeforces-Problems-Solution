#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    int n;
    int sum = 0;

    cin>> n;

    for(int i=0; i<n; i++)
    {
        cin>> ch;

        if(ch[0] == 'T')
            sum += 4;
        else if(ch[0] == 'C')
            sum += 6;
        else if(ch[0] == 'O')
            sum += 8;
        else if(ch[0] == 'D')
            sum += 12;
        else if(ch[0] == 'I')
            sum += 20;
    }
    cout<< sum << endl;


    return 0;
}
