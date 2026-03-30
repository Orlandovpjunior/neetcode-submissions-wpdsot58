class Solution {
public:
    bool isValid(string s) {

        std::vector<char> parentheses;

        for(int i = 0; i < s.size(); i++){

            if(s[i] == '(' or s[i] == '[' or s[i] == '{'){
                parentheses.push_back(s[i]);
            }else if(!parentheses.empty() and s[i] == '}' and parentheses.back() == '{'){
                parentheses.pop_back();
            }else if(!parentheses.empty() and s[i] == ')' and parentheses.back() == '('){
                parentheses.pop_back();
            }else if(!parentheses.empty() and s[i] == ']' and parentheses.back() == '['){
                parentheses.pop_back();
            }else{
                return false;
            }
        }

        if(parentheses.size() == 0){
            return true;
        }else{
            return false;
        }
    }
};