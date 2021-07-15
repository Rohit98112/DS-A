#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     int n=16;
//     int cnt=0;
//     while(n!=0)
//     {
//         cnt++;
//         n=n&(n-1);
//     }
//     if(cnt==1)
//         cout<<"true";
//     else
//         cout<<"false";
//     return 0;
// }

int main()
{
    int n=15;
    uint32_t temp=n;
    if(n<1)
        cout<<"false";
    if((temp&(-temp))==temp)
    {
        cout<<"true";
        return 0;
    }
    cout<<"false";

}
