class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        std::vector<vector<int>> result;
        std::vector<int> list_aux;

        dfs(0,nums, list_aux,result);

        return result;
    }

    void dfs(int i, const vector<int>& nums, vector<int>& subset,vector<vector<int>>& result){

        if (i >= nums.size()){
            result.push_back(subset);
            return;
        }

        subset.push_back(nums[i]);
        dfs(i + 1,nums, subset,result);

        subset.pop_back();
        dfs(i + 1,nums, subset,result);
    }
};
