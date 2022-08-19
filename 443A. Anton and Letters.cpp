#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1010];
    gets(s);
    int cnt = 0;
    int len = strlen(s);

    sort(s, s + len);
    for(int i=0; i<len; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            cnt++;
            if(s[i] == s[i+1])
                cnt--;
        }
    }
    cout<< cnt<< endl;


    return 0;
}
