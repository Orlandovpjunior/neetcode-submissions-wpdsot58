class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        std::queue<int> fila_students;
        std::queue<int> fila_sandwiches;

        for(int & student: students){
            fila_students.push(student);
        }

        for(int & sandwich: sandwiches){
            fila_sandwiches.push(sandwich);
        }

        int contador = 0;
        while(true){

            if(contador == fila_students.size()) break;

            if(fila_students.front() == fila_sandwiches.front()){
                fila_students.pop();
                fila_sandwiches.pop();
                contador = 0;
            }else{
                contador++;
                int student = fila_students.front();
                fila_students.pop();
                fila_students.push(student);
            }
        }

        return fila_students.size();
    }
};