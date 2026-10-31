class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;
        
        priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> min_heap;
        for (int i{}; i < points.size(); i++)
            min_heap.push({sqrt(pow(points[i][0], 2) + pow(points[i][1], 2)), i});
        
        for (int i{}; i < k; i++){
            res.push_back(points[min_heap.top().second]);
            min_heap.pop();
        }
        return res;
    }
};
