class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> mapa;
        for(int i = 0; i < nums.size(); i++){
            mapa[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++){
            if(mapa.contains(target-nums[i])){
                if(i != mapa[target-nums[i]]){
                    return {i, mapa[target-nums[i]]};
                }
            }
        }
    }
};
