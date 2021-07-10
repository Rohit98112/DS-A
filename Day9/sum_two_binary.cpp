#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num1="1001";
    string num2="100";
    int i=num1.length()-1,j=num2.length()-1;
        int car=0,sum;
        string res;
        while(i>=0||j>=0)
        {
            sum=car;
            if(i>=0)
                sum+=num1[i]-'0';
            if(j>=0)
                sum+=num2[j]-'0';
            res+=to_string(sum%2);
            car=sum/2;
            i--;j--;
        }
        if(car==1)
            res+='1';
        reverse(res.begin(),res.end());
        cout<<res;
}