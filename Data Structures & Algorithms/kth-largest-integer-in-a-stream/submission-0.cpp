class KthLargest {
public:

    priority_queue<int,vector<int>, greater<int>> minHeap;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;

        for(int i = 0;i < nums.size(); i++){
            add(nums.at(i));
        }
    }
    
    int add(int val) {
        minHeap.push(val);
        if(minHeap.size() > k){
            minHeap.pop();
        }
        return minHeap.top();
    }
};