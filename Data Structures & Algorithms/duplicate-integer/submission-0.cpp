class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for (int i{}; i < nums.size(); i++){
            if (auto search = map.find(nums[i]); search != map.end()){
                return true;
            }
            map.insert({nums[i], 1});
        }
        return false;
    }
};