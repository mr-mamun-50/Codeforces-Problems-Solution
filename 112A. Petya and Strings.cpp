#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    mamun();

    string s1, s2;
    cin>> s1 >> s2;

    for(ll i=0; i<s1.size(); i++) s1[i] = tolower(s1[i]);
    for(ll i=0; i<s2.size(); i++) s2[i] = tolower(s2[i]);

    if (s1 < s2) cout<< "-1" << endl;
    else if (s1 > s2) cout<< "1" << endl;
    else cout<< "0" << endl;


    return 0;
}
