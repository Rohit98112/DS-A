/*Remove all Dupliacte element from array */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,2,3,4,4,4};
    int n=sizeof(arr)/sizeof(int);
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            j=i;
        }
    }
    cout<<j;
    return 0;
}