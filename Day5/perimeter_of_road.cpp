#include<bits/stdc++.h>
using namespace std;
int main()
{
     int k=9,N=3,M=3;
     int v[N][M] = {{0,1,0,0},
                     {1,1,1,0},
                     {0,1,0,0},
                     {1,1,0,0}
                     };
    int p=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(v[i][j]==1)
            {
                if(j-1<0||v[i][j-1]==0)
                    p++;
                if(j<=N-1||v[i][j+1]==0)
                    p++;
                if(i==0||v[i-1][j]==0)
                    p++;
                if(i==N-1||v[i+1][j]==0)
                    p++;
            }
        }
    }
    cout<<p<<endl;

}