#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num1="123678532";
    string num2="128906543";
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
            res+=to_string(sum%10);
            car=sum/10;
            i--;j--;
        }
        if(car==1)
            res+='1';
        reverse(res.begin(),res.end());
        cout<<res;
}