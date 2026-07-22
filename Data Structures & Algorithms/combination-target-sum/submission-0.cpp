class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        std::vector<vector<int>> result;
        std::vector<int> subset;
        int soma_atual = 0;
        dfs(0,nums,subset,result,target,soma_atual);
        return result;
    }

    void dfs(int index,const vector<int>& nums, vector<int>& subset,vector<vector<int>>& result,int target, int soma_atual){
        
        if(index >= nums.size() || soma_atual > target){
            return;
        }

        if(soma_atual == target){
            result.push_back(subset);
            return;
        }

        subset.push_back(nums[index]);
        dfs(index, nums, subset, result, target, soma_atual + nums[index]);
        subset.pop_back();
        dfs(index + 1, nums, subset, result, target, soma_atual);
    }

};