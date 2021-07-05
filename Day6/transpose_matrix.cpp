#include<bits/stdc++.h>
using namespace std;
int main()
{
     int k=9,N=3,M=4;
     int v[N][M] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12}};
    int mat[M][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            mat[j][i]=v[i][j];
        }
    }
     for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}