#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[]={1,2,2,1,3,4};
    int arr2[]={2,3,3};
    int n=sizeof(arr1)/sizeof(int);
    int m=sizeof(arr2)/sizeof(int);
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        if(s.find(arr2[i])!=s.end())
        {
            s.insert(arr2[i]);
        }
    }
    for(auto x:s)
        cout<<x<<" ";
    
    
}