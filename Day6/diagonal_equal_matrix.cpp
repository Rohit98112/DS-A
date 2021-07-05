#include<bits/stdc++.h>
using namespace std;
int main()
{
     int k=9,N=3,M=4;
     int v[N][M] = {{1,2,3,4},
                     {5,1,2,3},
                     {9,5,1,2}};
    bool flag=true;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(i>0 && j>0 && v[i-1][j-1]!=v[i][j])
                flag=false;
        }
    }
    cout<<flag;
    return 0;

}