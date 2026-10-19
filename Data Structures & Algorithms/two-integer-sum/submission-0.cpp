class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i{}; i < nums.size(); i++){
            if (auto search = map.find(target - nums[i]); search != map.end()){
                return {map[search->first], i};
            }
            map.insert({nums[i], i});
        }
    }
};
