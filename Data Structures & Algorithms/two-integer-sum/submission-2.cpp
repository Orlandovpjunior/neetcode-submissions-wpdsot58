class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> mapcount;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(mapcount.count(complement)){
                result.push_back(mapcount[complement]);
                result.push_back(i);
                break;
            }
            mapcount[nums[i]] = i;
        }

        return result;
    }
};