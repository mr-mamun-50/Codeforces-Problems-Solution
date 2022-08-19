#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

bool isVowel(char c)
{
    return (c== 'a' || c== 'e' || c== 'i' || c== 'o' || c== 'u' || c== 'y');
}

int main()
{
    mamun();

    string s, ans;
    cin>> s;

    for(auto u:s)
    {
        char c = tolower(u);

        if(isVowel(c) == 0)
        {
            ans += '.';
            ans += c;
        }
    }
    cout<< ans << endl;


    return 0;
}
