class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> data;
        for (int i =0; i<nums.size(); i++){
            data.insert(nums[i]);
        }
        if(data.size() == nums.size()) return false;
        else{
            return true;
            } 
    }
};