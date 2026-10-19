class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int left = 0; 
        unordered_set<char> chars;
        for (int r{}; r < s.size(); r++){
            while(chars.find(s[r]) != chars.end()){
                chars.erase(s[left]);
                left++;
            }
            chars.insert(s[r]);
            res = max(res, r - left +1);
        }

        return res;
    }
};
