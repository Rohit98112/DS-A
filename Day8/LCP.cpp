#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> v={"true","truth","truthful","trust"};
    int temp;
    string res=v[0];
    for(int i=0;i<v.size();i++)
    {
        temp=0;
        while (temp<v.size()&&temp<res.size()&&res.at(temp)==v[i].at(temp))
        {
            temp++;

        }
        res=res.substr(0,temp);
        

    }
    cout<<res;
    return 0;
    
}

// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) 
//     { 
//      int pos=0;
//      int n=strs.size();
//      int minpos=strs[0].length();
//      for(int i=1;i<n;i++)
//      {
//         int j=0;
//         int pos=0;
//         while(j<strs[i].length() && j<minpos)
//         {
//         if(strs[i][pos]==strs[0][pos])
//         {
//           j++;
//           pos++;
//         }
//         else
//          break;
//         }
//         minpos=min(pos,minpos);
//     }
//     return strs[0].substr(0,minpos);
//     }
// };