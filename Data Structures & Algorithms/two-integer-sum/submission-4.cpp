class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> indeksy;
        for(int i = 0; i < nums.size();i++){
            indeksy[nums[i]] = i;
        }

        for (int i=0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(indeksy.count(diff) && indeksy[diff] != i)
            return{i,indeksy[diff]};
        }
        return{};
    }
};
