#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-2,0,3,-5,2,-1};
    int n=sizeof(arr)/sizeof(int);
    int l=0,r=2,sum=0;
    while (l<=r)
    {
        sum=sum+arr[r];
        r--;
       
    }
    
    //sum=arr[r]+arr[l];
    cout<<sum<<endl;
    return 0;
}