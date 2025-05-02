class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size() , left=0, ans=n+1, window=0;
        for(int right=0; right<nums.size(); right++){
            window += nums[right];
            while(window >= target){
                ans=min(ans, right-left+1);
                window-=nums[left++];
            }
        }
        return ans==n+1?0:ans;
    }
};
