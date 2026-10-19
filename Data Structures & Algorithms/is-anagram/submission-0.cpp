class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> ss, tt;
        for(int i{}; i < s.size(); i++){
            ss[s[i]]++;
            tt[t[i]]++;
        }

        for(auto const& [key, val] : ss){
            if(tt[key] != val) return false;
        }
        return true;
    }
};
