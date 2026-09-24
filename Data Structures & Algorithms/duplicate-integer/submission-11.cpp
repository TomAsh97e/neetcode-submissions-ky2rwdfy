class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> nums_set;
        for(int i = 0; i < nums.size(); i++){
            nums_set.insert(nums[i]);
        }
        if (nums_set.size() == nums.size()){
            return false;
        }
        else{
            return true;
        }
    }
};