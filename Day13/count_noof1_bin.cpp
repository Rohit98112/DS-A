#include<bits/stdc++.h>
using namespace std;
int main()
{
    uint32_t n=-3;
    int cnt=0;
    while(n!=0)
    {
        cnt++;
        n=n&(n-1);
    }
    cout<<cnt;
}