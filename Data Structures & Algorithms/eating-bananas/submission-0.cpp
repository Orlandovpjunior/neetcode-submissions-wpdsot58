class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        if(h == piles.size()) {
            int max_v = *std::max_element(piles.begin(), piles.end());
            return max_v;
        }
        else{

            int max_v = *std::max_element(piles.begin(), piles.end());

            int l = 1;
            int r = max_v;

            int result = max_v;

            while(l <= r){

                int mid = l + (r - l) / 2;
                int mid_v = mid;
                long long hours = 0;

                for(int i : piles){
                    hours += (i + mid_v - 1LL) / mid_v;
                }

                if(hours <= h){
                    result = mid_v;
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }

            return result;

        }
    }
};