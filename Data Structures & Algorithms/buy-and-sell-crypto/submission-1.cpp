class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0]; int max_ = 0;
        for (int i {}; i < prices.size(); i++){
            if (prices[i] < min){ 
                min = prices[i];
                continue;
            }

            max_ = max(max_, prices[i] - min);
        }

        return max_;
    }
};
