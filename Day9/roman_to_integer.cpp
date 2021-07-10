#include<bits/stdc++.h>
using namespace std;
int rti(char x)
{
    switch(x){
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
        default:
            break;
    }
    return 0;
}
int main()
{
    string str="CXVII";
    int sum=0;
    for(int i=0;i<str.size();i++)
    {
        char x=str[i];
        char y=str[i+1];
        int n=rti(x);int m=rti(y);
        if(n<m)
        {
            sum+=(m-n);
            i++;
        }
        else
            sum+=n;
    }
    cout<<sum;
}

int main()
{
    string str="DXCI";
    map<char,int>m;
    m.insert({'I',1});
    m.insert({'V',5});
    m.insert({'X',10});
    m.insert({'L',50});
    m.insert({'C',100});
    m.insert({'D',500});
    m.insert({'M',1000});
    int sum=0;
    for(int i=0;i<str.size();i++)
    {
        if(m[str[i]]<m[str[i+1]])
        {
            sum+=m[str[i+1]]-m[str[i]];
            i++;
        }
        else{
            sum+=m[str[i]];
        }
    }
    cout<<sum;
    return 0;

}

