class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
         int i = m - 1;  // Pointer for the end of arr1's valid elements
        int j = n - 1;  // Pointer for the end of arr2
        int k = m + n - 1;  // Pointer for the end of arr1 (merged array)

        // Merge arr1 and arr2 from the end
        while (i >= 0 && j >= 0) {
            if (arr1[i] > arr2[j]) {
                arr1[k--] = arr1[i--];  // Place arr1[i] at the end
            } else {
                arr1[k--] = arr2[j--];  // Place arr2[j] at the end
            }
        }

        // If there are remaining elements in arr2, copy them to arr1
        while (j >= 0) {
            arr1[k--] = arr2[j--];
        }
    }
};