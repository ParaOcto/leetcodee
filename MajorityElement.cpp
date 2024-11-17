class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> countElement;
        int vectorSize = nums.size(), ans = nums[0];
        for (int i : nums){
            countElement[i]++;
            if (countElement[i] > vectorSize / 2){
                ans = i;
                break;
            }
        }
    return ans;
    }
};