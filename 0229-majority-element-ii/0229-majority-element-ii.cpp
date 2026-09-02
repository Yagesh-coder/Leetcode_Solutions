class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> freq;
        for(auto num:nums)
        {
            freq[num]++;
        }
        for(auto it:freq)
        {
            if(it.second > nums.size()/3)
                ans.push_back(it.first);
        }
        return ans;
    }
};