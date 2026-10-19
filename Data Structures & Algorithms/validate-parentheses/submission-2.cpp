class Solution {
public:
    bool isValid(string s) {
        stack<char> stack_;
        for (int i{}; i < s.size(); i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack_.push(s[i]);
                continue;
            }
            
            else {
                if(stack_.empty()) return false;
                if (stack_.top() == '('){
                    if (s[i] != ')') return false;
                    stack_.pop();
                } else if(stack_.top() == '{'){
                    if (s[i] != '}') return false;
                    stack_.pop();
                } else {
                    if (s[i] != ']') return false;
                    stack_.pop();
                }
            }

        }
        if (stack_.empty()) return true;
        return false;
    }
};
