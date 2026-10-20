class Solution {
public:
    int characterReplacement(string s, int k) {
        int counts[26] = {0};
        int maxFreq = 0;
        int left = 0;
        int res = 0;

        for (int right{}; right < s.size(); right++){
            counts[s[right] - 'A']++;

            maxFreq = max(maxFreq, counts[s[right] - 'A']);

            while((right - left + 1) - maxFreq > k) {
                counts[s[left] - 'A']--;
                left++;
            }

            res = max(res, right - left + 1);
        }

        return res;
    }
};
