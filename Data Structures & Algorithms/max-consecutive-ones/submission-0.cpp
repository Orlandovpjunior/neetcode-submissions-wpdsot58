class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_value = 0;
        int cont = 0;
        for(auto& n: nums){
            if (n == 1){
                cont++;
                max_value = std::max(max_value, cont);
            }else{
                cont = 0;
            }
        }

        return max_value;
    }
};