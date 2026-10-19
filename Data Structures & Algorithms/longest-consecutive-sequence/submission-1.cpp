class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        unordered_set<int> set_(nums.begin(), nums.end());

        for (int num : nums){
            int length = 0; int curr = num;
            if (set_.find(curr - 1) != set_.end()) continue;
            while (set_.find(curr) != set_.end()){
                length++; curr++;
            }
            res = max(res, length);
        }

        return res;
    }
};
