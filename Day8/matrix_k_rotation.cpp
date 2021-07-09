#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int> > &v)
{
    int n=v.size();
    int m=v[0].size();
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(v[i][j],v[j][i]);
        }

    }
    for(int i=0;i<n;i++)
        reverse(v[i].begin(),v[i].end());
}
int main()
{
    vector<vector<int> > v1={{1,0},{0,1}};
    vector<vector<int> > v2={{0,1},{1,0}};
    int n=v1.size();
    int k=4;
    while(k--)
    {
        rotate(v1);
        if(v1==v2){
            cout<<"true";
            break;
        }
    }
    
    
    
}