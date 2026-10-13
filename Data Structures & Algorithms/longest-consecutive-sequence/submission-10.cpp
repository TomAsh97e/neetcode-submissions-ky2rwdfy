class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = 1;
        int max1 = 1;
        if(nums.size() == 0) return 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] == nums[i-1]+1) a++;
            else a = 1;

            max1 = max(a, max1);
        }
        return max1;
    }
};
