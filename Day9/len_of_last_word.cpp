class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        
        int i=s.length()-1;
        while(i>=0)
        {
            if(s[i]==' '&&c>0) return c;
            if(s[i]!=' ') c++;
            
            i--;
        }
        return c;
    }
};
