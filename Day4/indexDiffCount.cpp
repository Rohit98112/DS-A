#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,1,4,2,1,3};
    int n=sizeof(arr)/sizeof(int);
    vector<int>v(arr,arr+n);
    int cnt=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=v[i])
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}