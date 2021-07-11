#include<bits/stdc++.h>
using namespace std;
bool valid(char x)
{
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x==' ')
    {
        return true;
    }
    return false;
}
int main()
{
    string str="My name is Rohit";
    int l=0,r=str.size()-1;
    while(l<r)
    {
        while (l<r&&valid(str[l]))
        {
            l++;
        }
        while (l<r&&valid(str[r]))
        {
            r--;
        }
        swap(str[l],str[r]);
        l++;r--;
        
    }
    cout<<str;

}