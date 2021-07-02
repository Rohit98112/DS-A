#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={0,1,2,3,4};
    int index[]={0,1,2,2,1};
    int n=sizeof(arr)/sizeof(int);
    vector<int>v;
    int j=0,temp=0;
    for(int i=0;i<n;i++)
    {
        temp=arr[i];
        j=index[i];
        v.insert(v.begin()+j,temp);
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}