class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0; // To track the number of "drops"
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // Compare current element with the next element (circularly)
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
                if (count > 1) {
                    return false; // More than one drop, invalid
                }
            }
        }
        
        return true; // One or zero drops are allowed
    }
};

