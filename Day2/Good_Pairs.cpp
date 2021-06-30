#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,2,3,1,1,3};
    int n=v.size();int count=0;
    unordered_map<int, int>m;
    for(int i=0;i<n;i++)
    {
        m[v[i]]++;
    }
    for(auto itr:m)
    {
        int temp=itr.second;
        if(temp>1)
        {
            count=count+(temp-1);
        }
    }
    cout<<"\nNumber of good pairs are: "<<count;
    return 0;
}