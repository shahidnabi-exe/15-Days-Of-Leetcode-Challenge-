class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int count = 0;
        for (int i = 0; i < arr.size(); i++) {
            int sum = 0; // Reset sum for each starting point
            for (int j = i; j < arr.size(); j++) {
                sum += arr[j]; // Add current element
                if (sum == k) {
                    count++; // Found a valid subarray
                }
            }
        }
        return count;            
    }
};
