#include <cstring>

class Solution {
public:
    bool isAnagram(string s, string t) {
        const char *s_char = s.c_str();
        const char *t_char = t.c_str();
        vector <int> reps1 = {};
        reps1.assign(26, 0);
        vector <int> reps2 = {};
        reps2.assign(26, 0);
        if (strlen(s_char) != strlen(t_char)) return false;
        for(int i = 0; i <strlen(s_char);i++){
            reps1[((int)(t_char[i]))%26]++;
            reps2[((int)(s_char[i]))%26]++;
        }
        if(reps1 == reps2) return true;
        else return false;
    }
};
