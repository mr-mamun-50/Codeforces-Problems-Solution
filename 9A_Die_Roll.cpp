#include<bits/stdc++.h>

#define mamun()         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl            '\n'
#define tab             '\t'
#define ll              long long
#define lli             long long int
#define pb              push_back
#define fin(file)       freopen(file".txt", "r", stdin)
#define fout(file)      freopen(file".txt", "w", stdout)
#define FOR(i, a, b)    for (int i=a; i<=b; i++)
#define loop(i, n)      for (int i=0; i<n; i++)
#define srt(v)          sort(v.begin(), v.end())
#define rsrt(v)         sort(v.rbegin(), v.rend())
#define Fill(ar, val)   memset(ar, val, sizeof(ar))
#define testcase()      ll t; cin>>t; while(t--)

using namespace std;

int main()
{
    mamun();
    //fin("input");

    int a, b, c;
    cin>> a >>b;

    c = max(a, b);
    c = (6-c)+1;

    if(c%2==1){

        if(c==3)
            cout<<"1/2"<< endl;
        else
            cout<< c << "/6" << endl; 
    }
    else{

        if(c==4)
            cout<< "2/3" << endl;
        else
            cout<< "1/" << 6/c << endl;
    }

    return 0;
}
