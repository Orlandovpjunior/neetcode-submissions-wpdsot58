class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        for(int i =0; i< arr.size() - 1; i++){
            int max_v = arr[i + 1];

            for(int j = i + 1; j < arr.size(); j++){
                if(arr[j] > max_v){
                    max_v = arr[j];
                }
            }

            arr[i] = max_v;
        }

        arr[arr.size()-1] = -1;

        return arr;
    }
};