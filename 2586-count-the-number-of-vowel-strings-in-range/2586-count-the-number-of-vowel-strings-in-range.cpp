class Solution {
public:
    bool isVowel(char c){
        vector<char> vowels={'a','e','i','o','u'};
        for(int i=0;i<5;i++)
        {
            if(vowels[i]==c)
                return true;
        }
        return false;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            string word=words[i];
            int len=word.size();
            if(isVowel(word[0])&&isVowel(word[len-1]))
                count++;
        }
        return count;
    }
};