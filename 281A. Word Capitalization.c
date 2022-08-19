#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];

    gets(s);

    s[0] = toupper(s[0]);

    puts(s);

    return 0;
}
