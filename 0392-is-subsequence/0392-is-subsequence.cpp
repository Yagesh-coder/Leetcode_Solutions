class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,len=t.size();
        for(int j=0;j<len;j++){
            if(t[j]==s[i])
                i++;
        }
        if(i==s.size())
            return true;
        return false;
    }
};