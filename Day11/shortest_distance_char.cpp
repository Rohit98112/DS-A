#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="loveleetcode";
    char c='e';
    vector<int>res(s.size(),INT_MAX);
    vector<int>ind;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==c){
            ind.push_back(i);
            res[i]=0;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<ind.size();j++)
            res[i]=min(res[i],abs(ind[j]-i));
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    return 0;
}