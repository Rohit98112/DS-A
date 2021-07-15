#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int n=64;
    int n;
    cin>>n;
    int f=0;
    if(n==1){
        cout<<"Yes";
        return 0;
    }
    while(n>1)
    {
        if(n%4==0)
        {
            n=n/4;
            f=1;
        }
        else{
            f=0;
            break;
        }
    }
    if(f!=0)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}