//Number Conversion Binary to decimal binary to octal decimal to octal

#include<bits/stdc++.h>
using namespace std;
int value(char c)
{
    if(c>='0'&&c<='9')
        return (int)c-'0';
    else
        return (int)c-'A'+10;
}

int main()
{
    string str="11AB";
    int n=str.size();
    int base=16;
    int pow=1,dec=0;
    for(int i=n-1;i>=0;i--)
    {
        int val=value(str[i]);
        dec=dec+val*pow;
        pow=pow*base;

    }
    cout<<dec;
}