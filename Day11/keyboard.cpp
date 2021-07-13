//Find those words which appear on same line of keyboard

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>str={"Dad","This","Pop"};
    string v1="qwertyuiop";
    string v2="asdfghjkl";
    string v3="zxcvbnm";
    vector<string>result;
    int c1=0,c2=0,c3=0;
    for(int i=0;i<str.size();i++)
    {
        for(int j=0;j<str[i].size();j++)
        {
            if(v1.find(tolower(str[i][j]))!=-1)
                c1++;
            if(v2.find(tolower(str[i][j]))!=-1)
                c2++;
            if(v3.find(tolower(str[i][j]))!=-1)
                c3++;
            
        }
        if(c1==str[i].size()||c2==str[i].size()||c3==str[i].size())
            result.push_back(str[i]);
        c1=0,c2=0,c3=0;
    }
    for(auto x:result)
        cout<<x<<" ";
    return 0;
}
