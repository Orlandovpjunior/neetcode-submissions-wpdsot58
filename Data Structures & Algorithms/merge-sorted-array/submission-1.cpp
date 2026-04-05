class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        std::vector<int> aux(m + n);
        int k = 0;
        int i = 0;
        int j = 0;

        if(m == 0){
           while(j < n){
                aux.at(k) = nums2.at(j++);
                k++;
            }
        } else if(n == 0){
            while(i < m){
                aux.at(k) = nums1.at(i++);
                k++;
            }
        }else{
            while(i < m && j < n){

                if(nums1.at(i) <= nums2.at(j)){
                    aux.at(k) = nums1.at(i++);
                }else{
                    aux.at(k) = nums2.at(j++);
                }
                k++;
            }
            while(i < m){
                aux.at(k) = nums1.at(i++);
                k++;
            }

            while(j < n){
                aux.at(k) = nums2.at(j++);
                k++;
            }
        }

        nums1 = aux;
    }
};