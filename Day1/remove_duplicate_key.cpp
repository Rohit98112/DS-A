/*Remove all Key Element */

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,3,0,0,4,0};
    int key=0;
    for(auto itr=v.begin();itr!=v.end();itr++){
        if(*itr==key)
        {
            v.erase(itr);
            itr--;
        }
    }
    int c=0;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        c++;
    }
    cout<<"\n"<<c;
    return 0;
}