class Solution {
public:
    int jump(vector<int>& nums) {
        int N = nums.size();
        int steps = 0, end = 0, farthest = 0;

        for (int i = 0; i < N - 1; i++){
            farthest = max(farthest, i + nums[i]);
            if (i == end){
                steps++;
                end = farthest;
            }
        }
        return steps;

    }
};