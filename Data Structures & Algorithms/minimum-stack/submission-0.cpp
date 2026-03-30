class MinStack {
public:
    std::vector<int> pilha;
    std::vector<int> min_pilha;

    MinStack() {
    }
    
    void push(int val) {
        pilha.push_back(val);
        if (min_pilha.empty() || val <= min_pilha.back()) {
            min_pilha.push_back(val);
        }
    }
    
    void pop() {
        if(!pilha.empty()){
            if(pilha.back() == min_pilha.back()){
                min_pilha.pop_back();
            }
            pilha.pop_back();
        }
    }
    
    int top() {
        return pilha.back();
    }
    
    int getMin() {
       return min_pilha.back();
    }
};