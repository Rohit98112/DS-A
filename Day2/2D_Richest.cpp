#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int> >v;
    int n,temp,key;
    cout<<"Enter no of rows and columns:";
    cin>>n;
    cout<<"\nEnter no to be pushed:";
    for(int i=0;i<n;i++)
    {
        vector<int>temp;
        for(int j=0;j<n;j++)
        {
           cin>>key;
           temp.push_back(key); 
        }
        v.push_back(temp);
    }
    int max=0,cost;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=v[i][j];
        }
        if(sum>max){
            max=sum;
            cost=i+1;
        }
            
    }
    
    cout<<"\nThe Richest Person Having total cost is: "<<max<<" and having ID is: "<<cost;
    return 0;
}