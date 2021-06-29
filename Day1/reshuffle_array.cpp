/*Reshuflling of Array*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,5,1,3,4,7};
    int n=sizeof(arr)/sizeof(int);
    vector<int>v;
    int j=n/2;
    for(int i=0;i<n/2;i++){
        v.push_back(arr[i]);
        v.push_back(arr[j]);
        j++;
    }
    for(auto i=v.begin();i<v.end();i++)
        cout<<*i<<" ";
    return 0;
}