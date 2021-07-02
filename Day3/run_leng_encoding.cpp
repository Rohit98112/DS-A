#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,1,2,3};
    int n=sizeof(arr)/sizeof(int);
    int f,val;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        f=arr[i]-1;
        val=arr[i];
        while(f--){
            v.push_back( val);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}