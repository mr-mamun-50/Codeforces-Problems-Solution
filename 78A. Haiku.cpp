#include<bits/stdc++.h>
using namespace std;
#define mamun() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long

bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    mamun();

    vector<string> v;
    int cnt[] = {5, 7, 5};

    for(int i=0; i<3; i++)
    {
        string s;
        char c;
        cin>> c;
        getline(cin, s);
        s+=c;
        v.push_back(s);
    }

    for(int i=0; i<3; i++)
    {
        int c=0;

        for(auto u:v[i]){
            if(isVowel(u))
                c++;
        }

        if(c!=cnt[i])
            return cout<< "NO" <<endl, 0;
    }
    cout<< "YES" << endl;

    return 0;
}
