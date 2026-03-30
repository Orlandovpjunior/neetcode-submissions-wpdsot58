class Solution {
public:
    int calPoints(vector<string>& operations) {
        std::vector<int> record;

        for(const auto& op:operations){
            if(op != "+" && op != "D" && op != "C"){
                record.push_back(std::stoi(op));
            }else if(op == "+"){
                int num1 = record[record.size() - 1];
                int num2 = record[record.size() - 2];
                int result = num1 + num2;
                record.push_back(result);
            }else if(op == "C"){
                record.pop_back();
            }else if(op == "D"){
                int num1 = record.back();
                int double_num = num1 * 2;
                record.push_back(double_num);
            }
        }
        int sum = 0;
        for(int i = 0; i < record.size(); i++){
            sum += record[i];
        }

        return sum;
        
    }
};