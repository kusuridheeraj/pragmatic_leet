class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> stack_top, stack_pop;
    void push(int x) {
        stack_top.push(x);
    }
    
    int pop() {
        if(stack_pop.empty()){
        while(!stack_top.empty()){
            stack_pop.push(stack_top.top());
            stack_top.pop();
        }
        }
        int x = stack_pop.top();
        stack_pop.pop();
        return x;
    }

    
    int peek() {
                if(stack_pop.empty()){

                while(!stack_top.empty()){
            stack_pop.push(stack_top.top());
            stack_top.pop();
        }
                }
        return stack_pop.top();
    }
    
    bool empty() {
        return (stack_top.empty()&& stack_pop.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */