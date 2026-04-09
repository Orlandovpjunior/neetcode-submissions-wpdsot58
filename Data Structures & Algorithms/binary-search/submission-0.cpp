class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while(l <= r){

            int middle = static_cast<int>((l + r)/2);

            if (nums.at(middle) > target){
                r = middle - 1;
            }else if(nums.at(middle) < target){
                l = middle + 1;
            }else{
                return middle;
            }
        }
        return -1;
    }
};
