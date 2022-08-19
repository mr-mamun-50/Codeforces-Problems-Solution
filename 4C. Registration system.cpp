#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;

    map<string, int> database;

    string s;

    while(n--)
    {
        cin>> s;
        if(database[s] == 0)
        {
            cout<< "OK" << endl;
            database[s] = 1;
        }
        else
        {
            cout<< s << database[s] << endl;
            database[s]++;
        }
    }


    return 0;
}
