#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int arr[]={0,1,2,4,5};
    int s=sizeof(arr)/sizeof(int);
    int sum1=n*(n+1)/2;
    int sum2=0;
    for(int i=0;i<s;i++)
    {
        sum2+=arr[i];
    }
    int result=sum1-sum2;
    cout<<result;
    return 0;
}