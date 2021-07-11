#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="";
    int n=28;
    int rem;
    while(n>0)
    {
        char c='A'+(n-1)%26;
        s+=c;
        n=(n-1)/26;
    }
    reverse(s.begin(),s.end());
    cout<<s;

}