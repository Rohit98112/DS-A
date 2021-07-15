#include<bits/stdc++.h>
using namespace std;
int val(int v)
{
    uint32_t n=v;
    int cnt=0;
    while(n!=0)
    {
        cnt++;
        n=n&(n-1);
    }
    return cnt;
}
int main()
{
    int n=5;
    vector<int> res;
    for(int i=0;i<=n;i++)
    {
        int c=val(i);
        res.push_back(c);
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    return 0;

}