class MinStack {
public:

    stack<int> st{};
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int> tmp = st;
        int min1{tmp.top()};
        while(!tmp.empty()){
            min1 = min(min1, tmp.top());
            tmp.pop();
        }       
        return min1;
    }
};
