#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{2,3,5,1,3};
    int sum=0;
    int n=v.size();
    int ext_toffee=3;
    vector<bool>res(n);
    int max=*max_element(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        sum=v[i]+ext_toffee;
        if(sum>max)
            res[i]=true;
        else
            res[i]=false;
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}