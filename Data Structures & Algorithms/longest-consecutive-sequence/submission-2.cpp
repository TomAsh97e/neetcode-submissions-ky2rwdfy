class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> zestaw(nums.begin(), nums.end());
        int longest = 0;
        for(int num : zestaw){
            if(zestaw.find(num-1) == zestaw.end()){
                int length = 1;
                while(zestaw.find(num + length) != zestaw.end()){
                    length++;
                }
                longest = max(length, longest);
            }
        }
        return longest;
    }
};
