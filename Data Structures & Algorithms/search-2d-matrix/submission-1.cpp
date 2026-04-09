class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(const auto &i: matrix){
            int l = 0;
            int r = i.size() - 1;

            while(l <= r){

                int middle = static_cast<int>((l + r)/2);

                if(i.at(middle) < target){
                    l = middle +1;
                }else if(i.at(middle) > target){
                    r = middle -1;
                }else{
                    return true;
                }
            }
        }
        return false;
    }
};
