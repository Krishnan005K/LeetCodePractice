// class MinStack {
// public:
//     stack<long> st;
//     long minval;
//     MinStack() {
//     }
    
//     void push(int val) {
//         if(st.empty()){
//             st.push(val);
//             minval = val;
//         }
//         else if(val >= minval){
//             st.push(val);
//         }
//         else{
//             st.push(2*1LL*val-minval);
//             minval = val;
//         }
//     }
    
//     void pop() {
//         if(st.top() < minval){
//             minval = 2*minval - st.top();
//         }
//         st.pop();
//     }
    
//     int top() {
//         if(st.top() < minval){
//             return minval;
//         }
//         return st.top();
//     }
    
//     int getMin() {
//         return minval;
//     }
// };


class MinStack {
public:

    vector<pair<int, int>> arr;

    MinStack() {}
    
    void push(int val) {
        // first element about to push
        if (arr.empty()) {
            arr.push_back({val, val});
        }
        // not first element
        else {
            arr.push_back({val, min(arr.back().second, val)});
        }
    }
    
    void pop() {
        arr.pop_back();
    }
    
    int top() {
        return arr.back().first;
    }
    
    int getMin() {
        return arr.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
