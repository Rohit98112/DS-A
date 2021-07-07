#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    //vector<vector<int> >grid= {{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-2,-3,-4}};
    vector<vector<int> >grid= {{5,1,0},{-5,-5,-5}};
    int m=grid.size();
    int n=grid[0].size();
    int i=0,j=0;
    int cnt=0;
        while(i<=m-1&&j<n)
        {
            if(grid[i][j]<0)
            {
                cnt++;
                
                
                if(j==n-1){
                    j=0;
                    i++;
                }
                    
                else
                    j++;
            }
            else{
                if(j==n-1)
                {
                    j=0;
                    i++;
                }
                else
                    j++;
            }
        }
        cout<<cnt;
        return 0;
}