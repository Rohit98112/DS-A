#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    vector<vector<int> >v= {{1,1,0,0,0},{1,1,1,1,0},{1,0,0,0,0},{1,1,1,1,1}};
    int n=4,m=5;int k=0;
    
    
    for(int i=0;i<v[0].size();i++)
     {
        
        for(int j=0;j<v.size();j++)
        {
            if(v[j][i]==0)
            {
                if(v[j][i-1]!=0){
                    
                    cout<<j <<" ";
                    k++;
                    
                   
                }
            }
            
        }
        if(k==2)
            break;
        
     }
    return 0;
}