class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (const auto& slowo: strs){
            vector<int> count(26,0);
            for(char c:slowo){
                count[c-'a']++;
            }
            string klucz = to_string(count[0]);
            for(int i=1 ; i<26 ;i++){
                klucz += ','+to_string(count[i]); 
            }

            res[klucz].push_back(slowo);
        }
            vector <vector<string>> final_result;
            for (const auto& pair: res){
                final_result.push_back(pair.second);
            }
            

        
        return final_result;
    }
};
