class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0; int right = nums.size() - 1; int mid = (right + left) / 2;
        while (right - left > 1){
            if (nums[mid] > target){
                right = mid - 1;
                mid = (right + left) / 2;
                continue;
            }

            if (nums[mid] < target){
                left = mid + 1;
                mid = (right + left) / 2;
                continue;
            }

            if (nums[mid] == target) return mid;
            return -1;
        }
        if (nums[left] == target) return left;
        if (nums[right] == target) return right;
        return -1;
    }
};
