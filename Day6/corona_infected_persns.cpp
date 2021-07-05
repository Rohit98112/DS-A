#include<bits/stdc++.h>
using namespace std;
int main()
{
     int k=9,N=3,M=3;
     int v[N][M] = {{1,1,1},
                     {1,1,0},
                     {1,0,1}};
    //int i=1,j=1;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(v[i][j]==1)
            {
                v[i][j]=2;
                if(i>0&&v[i-1][j]==1)
                    v[i-1][j]=2;
                if(i<N-1&&v[i+1][j]==1)
                    v[i+1][j]=2;
                if(j>0 && v[i][j-1]==1)
                    v[i][j-1]==2;
                if(j<M-1 && v[i][j+1]==1)
                    v[i][j+1]==2;
            }
        }
    }
     for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}