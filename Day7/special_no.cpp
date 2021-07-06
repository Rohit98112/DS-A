#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n=3,m=3;
     vector<vector<int> >v= {{3,7,8},
                              {9,11,13},
                              {15,16,17}};
    int min,max;
    int k=0,res;
    for(int i=0;i<n;i++)
    {
        min=INT_MIN;max=INT_MAX;k=0;
        for(int j=0;j<n;j++)
        {
            if(v[i][j]<max){
                max=v[i][j];
                k=j;
            }
        }
        for(int j=0;j<n;j++)
        {
            if(v[j][k]>min){
                min=v[j][k];
                
            }
            
        }
        //k++;
        //cout<<"hi";
        if(min==max)
        {
            
            cout<<min;
            break;
        }
    }
    
return 0;
}