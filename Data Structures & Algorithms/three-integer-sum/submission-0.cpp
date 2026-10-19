class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i{}; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i -1]) continue;
            int left = i + 1;
            int right = nums.size() -1;

            while (left < right){
                int x = nums[i] + nums[left] + nums[right];\
                if (x > 0)
                    right--;
                else if (x < 0)
                    left++;
                else {
                    vector<int> v = {nums[i], nums[left], nums[right]};
                    res.push_back(v);
                    left++;
                    while (nums[left] == nums[left - 1] && left < right)
                        left++;
                }
            }
        }


        return res;
    }
};
