class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        for(int i =0; i < nums.size(); i++)
        {
            int mult = 1;
            for(int j = 0; j < nums.size(); j++){
                if(j != i){
                    mult *= nums[j];
                } 
            }
            ans.emplace_back(mult);
            
        }
        return ans;
    }
};
