#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,4,3,2};
   
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n);int max=0;
    for(int i=0;i<n-1;i++)
    {
        max+=arr[i];
        i++;
    }
    cout<<max;
    return 0;
}