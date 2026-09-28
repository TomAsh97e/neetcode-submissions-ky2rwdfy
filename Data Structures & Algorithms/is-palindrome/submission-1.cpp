class Solution {
public:
    bool isPalindrome(string s) {
        
        string wynik{};
        for(char c: s){
            if(isalnum(c)){
                wynik += c;
            }
        }
        int l = 0;
        int r = wynik.size()-1;
        for(int i = 0; i < wynik.size()/2; i++){
            if(toupper(wynik[r]) != toupper(wynik[l])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
