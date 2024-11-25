class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (auto num : nums)
            if (i == 0 || i == 1 || nums[i-2] != num)
                nums[i++] = num;
        return i;
    }
};
/*
i == 0: This condition ensures that the first element is always included in the modified vector.
i == 1: This condition ensures that the second element is always included in the modified vector.
nums[i-2] != ele: This condition checks if the current element ele is not the same as the element two positions before the current position i. This ensures that only two occurrences of any element are included in the modified vector.
*/