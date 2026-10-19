class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int size = nums.size();
        vector<int> res;

        for(int i{}; i < size; i++){
            int sum{1};
            for(int j{}; j< size; j++){
                if (j==i) continue;
                sum *= nums[j];
            }
            res.push_back(sum);
        }

        return res;
    }
};
