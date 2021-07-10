#include<bits/stdc++.h>
using namespace std;
int valid(char x)
{
    switch(x)
    {
        case '(':return 1;
        case ')':return -1;
        case '{':return 2;
        case '}':return -2;
        case '[':return 3;
        case ']':return -3;
    }
    return 0;
}
int main()
{
    string str="(]";
    stack<char>st;int flag=1;
    for(int i=0;i<str.size();i++)
    {
        char x=str[i];
        int n=valid(x);
        if(n>0)
        {
            st.push(n);
        }
        else
        {
            int temp=st.top();
            st.pop();
            if(abs(temp)==abs(n))
                continue;
            else
                {
                    
                    break;
                }
        }
    }
    if(st.empty())
        cout<<"Yes";
    else
        cout<<"No";

}


//  stack<char> st;
//       for(int i=0;i<s.length();i++)
//       {
//         if(s[i] == '(' || s[i] == '{' || s[i] == '[') 
//             st.push(s[i]);
//         else if(!st.empty() && st.top() == '(' && s[i] == ')')
//             st.pop();
//         else if(!st.empty() && st.top() == '{' && s[i] == '}')
//             st.pop();
//         else if(!st.empty() && st.top() == '[' && s[i] == ']') 
//             st.pop();
//         else 
//             return false;
//       }
//       if(st.empty()) 
//           return true;
//       else 
//           return false;
//     }