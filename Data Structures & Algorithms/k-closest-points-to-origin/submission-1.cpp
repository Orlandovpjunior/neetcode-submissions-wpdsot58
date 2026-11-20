class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        using Item = pair<double, vector<int>>;
        priority_queue<Item, vector<Item>, greater<Item>> pq;

        for (auto & point: points){
            double euclidean_distance_value = euclidean_distance(point);
            pq.push({euclidean_distance_value, point});
        }

        vector<vector<int>> respostas;
        for(int i = 0 ;i < k; i++){
            auto [d, p] = pq.top();
            respostas.push_back(p);
            pq.pop();
        }

        return respostas;
    }

    double euclidean_distance(vector<int> nums){
        return sqrt(pow(nums[0], 2) + pow(nums[1], 2));
    }
};
