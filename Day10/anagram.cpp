#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="cat",s2="tac";
    int f[26]={0};
    int flag=1;
    int n=s1.size();int m=s2.size();
    if(n!=m){
        flag=0;
       
    }
    for(int i=0;i<n;i++)
    {
        f[(s1[i]-'a')]++;
    }
    for(int i=0;i<n;i++)
    {
        f[(s2[i]-'a')]--;
    }
    for(int i=0;i<26;i++)
    {
        if(f[i]>0 || f[i]<0)
            flag=0;
    }
    if(flag!=0)
        cout<<"true";
    else
        cout<<"false";
        
}