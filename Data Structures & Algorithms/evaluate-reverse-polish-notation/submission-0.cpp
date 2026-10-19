class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int res = 0;
        for (int i{}; i < tokens.size(); i++){
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
            if (tokens[i] == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(a + b);
                continue;
            } else if (tokens[i] == "-"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b - a);
                continue;
            } else if (tokens[i] == "*"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(a*b);
                continue;
            } else {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b/a);
                continue;
            }
            }
            st.push(stoi(tokens[i]));
        }
        return st.top();

    }
};
