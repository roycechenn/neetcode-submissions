class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res;
        for (size_t i{}; i < temperatures.size(); i++){
            size_t j{i + 1};
            while(j < temperatures.size()){
                if (temperatures[i] >= temperatures[j]){
                    j++;
                    continue;
                }
                res.push_back(j - i);
                break;
            }
            if (j == temperatures.size()){
                res.push_back(0);
            }
        }

        return res;
    }
};
