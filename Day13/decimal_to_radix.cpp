//Decimal to any radix
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=10,rem=0;
    int bnum[32],i=0;
    int base=2;
    while(num>=1)
    {
        rem=num%base;
        bnum[i]=rem;
        num=num/base;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<bnum[j];
    }
    return 0;
}