#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3};
    int f=1;
     int n=sizeof(arr)/sizeof(int);
     vector<int>v{f};
     for(int i=0;i<n;i++)
     {
         v.push_back(v[i]^arr[i]);
     }
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
     return 0;

}