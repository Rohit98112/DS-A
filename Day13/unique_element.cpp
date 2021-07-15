#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     int arr[]={3,3,1,4,1,4,5};
//     int n=sizeof(arr)/sizeof(int);
//     int flag=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(i!=j)
//             {
//                 if(arr[i]==arr[j]){
//                     flag=1;
//                      break;
//                 }
//             }
//         }
//         if(flag!=1)
//             cout<<arr[i];
//         flag=0;

//     }
// }
// int main()
// {
//     int arr[]={3,3,1,4,1,5,4};
//     //int arr[]={3,3,1,4,1,4,5};
//     int n=sizeof(arr)/sizeof(int);
//     sort(arr,arr+n);
//     int flag=0;
//     for(int i=0;i<n;i=i+2)
//     {
//         if(arr[i]!=arr[i+1])
//             cout<<arr[i];
//     }

// }
int main()
{
    int arr[]={3,3,1,4,1,5,4};
    //int arr[]={3,3,1,4,1,4,5};
    int n=sizeof(arr)/sizeof(int);
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res^arr[i];
    }
    cout<<res;
}