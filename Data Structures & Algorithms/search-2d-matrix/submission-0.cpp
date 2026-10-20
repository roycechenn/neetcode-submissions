class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(vector v : matrix) {
            if (target < v[0] || target > v[v.size() -1]) continue;

            int left = 0; int right = v.size() - 1;
            while (left < right){
                if (v[left] == target) return true;
                int mid = (left + right) / 2;
                if (v[mid] < target) left = mid + 1;
                else right = mid;
            }

            if (left == right){
                return v[left] == target ? true : false;
            }
        }

        return false;
    }
};
