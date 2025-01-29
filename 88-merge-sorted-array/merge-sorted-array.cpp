class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i = m - 1;  // Pointer for the end of nums1's valid elements
    int j = n - 1;  // Pointer for the end of nums2
    int k = m + n - 1;  // Pointer for the end of nums1 (merged array)

    // Merge nums1 and nums2 from the end
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];  // Place nums1[i] at the end
        } else {
            nums1[k--] = nums2[j--];  // Place nums2[j] at the end
        }
    }

    // If there are remaining elements in nums2, copy them to nums1
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
    }
};