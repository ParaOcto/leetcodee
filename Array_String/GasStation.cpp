class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size(),
            checkMinus = 0,
            totalFuel = 0,
            start = 0;
        for (int i = 0; i < n; i++){
            int temp = gas[i] - cost[i];
            totalFuel += temp;
            checkMinus += temp;
            if (checkMinus < 0){
                checkMinus = 0;
                start = i + 1;
            }
        }
        return (totalFuel < 0) ? -1 : start;
    }
};  