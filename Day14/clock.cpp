#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>res;
    int n;
    cin>>n;
    for(int i=0;i<12;i++)
    {
        bitset<4> hours(i);
        for(int j=0;j<60;j++)
        {
            bitset<6> min(j);
            if(hours.count()+min.count()==n)
            {
                string h=to_string(i);
                string m;
                m=(j<10)?":0":":";
                m=m+to_string(j);
                res.push_back(h+m);
            }
        }
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    return 0;
}