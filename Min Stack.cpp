class MinStack {
    
public:
    /** initialize your data structure here. */
    vector<int> a;
    int min;
    MinStack() {
        min = INT_MAX;
    }
    
    void push(int x) {
        if(x <= min) {
            a.push_back(min);
            min = x;
        }
        a.push_back(x);
    }
    
    void pop() {
        int t = a.back(); a.pop_back();
        if (t == min) {
            min = a.back();
            a.pop_back();
        }
    }
    
    int top() {
        return a.back();
    }
    
    int getMin() {
        return min;
    }
};