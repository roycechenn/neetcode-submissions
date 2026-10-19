class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st; // holds indexx
        vector<int> res(temperatures.size());
        for (int i{}; i < temperatures.size(); i++){
            if (st.empty()){
                st.push(i);
                continue;
            }
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                res[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
            
        }
        return res;
    }
};
