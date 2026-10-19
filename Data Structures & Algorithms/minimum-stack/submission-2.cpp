class MinStack {
public:
    stack<int> minn;
    vector<int> vec;

    MinStack() {
    }
    
    void push(int val) {
        vec.push_back(val);
        if (minn.empty()) {
            minn.push(val);
        } else {
            minn.push(min(val, minn.top()));
        }

    }
    
    void pop() {
        minn.pop();
        vec.pop_back();
    }
    
    int top() {
        return vec[vec.size() - 1];
    }
    
    int getMin() {
        return minn.top();
    }
};
