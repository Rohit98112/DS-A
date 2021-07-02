#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt;
    string allowed = "ab";
    vector<string>words = {"ad","bd","aaab","baa","badab"};
    unordered_map<char,int>m;
    int c=0;//to count no of words
    for(auto i:allowed)
        m[i]=1;
    for(auto i:words)
    {
        cnt=0;
        for(auto j:i)
        {
            if(m[j]==0)
            {
                cnt=1;
                break;
            }
                
        }
        if(cnt==0)
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}