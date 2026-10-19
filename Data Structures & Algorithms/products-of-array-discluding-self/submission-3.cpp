class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros{};
        int sum{1};
        for (auto num : nums){
            if (num == 0)
                zeros++;
            else {
                sum *= num;
            }
        }

        vector<int> res(nums.size(), 0);

        if (zeros > 1) return res;
        for(int i{}; i < nums.size(); i++){
            if (zeros > 0){
                res[i] = (nums[i] == 0 ? sum : 0);
            } else {
                res[i] = (sum/nums[i]);
            }
        }

        return res;
    }
};
