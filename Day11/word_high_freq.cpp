#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1="Guest Hit Aman,Aman hit aayush...!";
    vector<string> str2;
    str2.push_back("hit");
    unordered_map<string,int> m;
    unordered_set<string> set(str2.begin(),str2.end());
    for(int i=0;i<str1.length();i++)
    {
        str1[i]=isalpha(str1[i])?tolower(str1[i]):' ';
    }
   
    
    stringstream s(str1);
    string word;
    int max=INT_MIN;
    string temp;
    while (s>>word)
    {
        if(!set.count(word))
        {
            m[word]++;
            if(m[word]>max){
                max=m[word];
                temp=word;
            }
        }
    }
    
   
    cout<<temp;
    return 0;
    
}