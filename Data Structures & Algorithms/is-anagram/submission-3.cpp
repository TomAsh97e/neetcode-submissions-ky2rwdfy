class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        std::unordered_map<char, int> mapa1;
        std::unordered_map<char, int> mapa2;
        for(int i =0; i < s.size(); i++){
            mapa1[s[i]]++;
            mapa2[t[i]]++;
        }
        if(mapa1 == mapa2) return true;
        else return false;
    }
};
