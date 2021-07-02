#include<bits/stdc++.h>
using namespace std;
int  bin(vector<int>v,int k){
    int l=0,r=v.size()-1,mid;
    while (l<=r)
    {
        mid=l+(r-l)/2;
        if((mid==0 || v[mid-1]<k)&&v[mid]==k)
            return mid;
        else if(v[mid]<k)
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
    
}
int main()
{
    int val;
    vector<int>v{8,1,2,2,3};
    sort(v.begin(),v.end());
    vector<int>v1(v);
    for(int i=0;i<v.size();i++)
    {
       val=bin(v1,v[i]);
       v[i]=val; 
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}