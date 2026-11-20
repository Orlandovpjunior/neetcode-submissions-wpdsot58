class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int> max_priority_queue;

        for(auto &i : stones){
            max_priority_queue.push(i);
        }

        int rodadas = max_priority_queue.size();

        for(int i = 0; i < rodadas; i ++){

            if(max_priority_queue.size() == 2){
                int stone_1 = max_priority_queue.top();
                max_priority_queue.pop();
                int stone_2 = max_priority_queue.top();
                max_priority_queue.pop();
                if(stone_1 - stone_2 != 0){
                    max_priority_queue.push(stone_1 - stone_2);
                }else{
                    return 0;
                }
            }

            if(max_priority_queue.size() == 1){
                return max_priority_queue.top();
            }else{
                int stone_1 = max_priority_queue.top();
                max_priority_queue.pop();
                int stone_2 = max_priority_queue.top();
                max_priority_queue.pop();
                if(stone_1 - stone_2 != 0){
                    max_priority_queue.push(stone_1 - stone_2);
                }
            }
        }
        return 0;
    }
};
