class Solution {
public:
    bool detectCapitalUse(string word) {
        int low_count=0,up_count=0,len=word.size();
        for(int i=0;word[i]!='\0';i++)
        {
            if(isupper(word[i]))
                up_count++;
            else
                low_count++;
        }
        if(up_count==len||low_count==len||(isupper(word[0])&&low_count==len-1))
            return true;
        return false;
    }
};