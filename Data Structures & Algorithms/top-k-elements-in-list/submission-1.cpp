class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> mapp;
        for (auto &num : nums) mapp[num]++;

        vector<vector<int>> bucket(nums.size() + 1);
        for (auto &it : mapp){
            int num = it.first;
            int freq = it.second;
            bucket[freq].push_back(num);
        }

        vector<int> res;
        for (int i = nums.size(); i > 0; i--){
            for (auto num : bucket[i]) {
                res.push_back(num);
                if (res.size() == k) return res;
            }
        }

        return res;

    }
};
