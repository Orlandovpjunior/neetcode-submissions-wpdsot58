class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map_count_s;
        unordered_map<char, int> map_count_t;

        for (char & c : s){
            if (map_count_s.count(c) == 0){
                map_count_s[c] = 1;
            }else {
                map_count_s[c]++;
            }
        }

        for (char & c : t){

            if (map_count_s.count(c) == 0){
                return false;
            }

            if (map_count_t.count(c) == 0){
                map_count_t[c] = 1;
            }else {
                map_count_t[c]++;
            }
        }
        
        if (map_count_s == map_count_t) {
            return true;
        } else {
            return false;
        }
    }
};
