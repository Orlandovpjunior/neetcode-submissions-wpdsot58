class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mapcount;

        for (int &num: nums){
            if (mapcount.count(num) == 0){
                mapcount[num] = 1;
            }
            else{
                return true;
            }
        }

        return false;



    }
};