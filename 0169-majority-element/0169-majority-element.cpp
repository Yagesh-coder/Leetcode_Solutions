class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0,ele,len=nums.size();
        for(int i=0;i<len;i++)
        {
            if(cnt==0)
            {
                cnt=1;
                ele=nums[i];
            }
            else if(nums[i]==ele)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<len;i++)
        {
            if(nums[i]==ele)
                cnt1++;
        }
        if(cnt1>len/2)
            return ele;
        return -1;
    }
};