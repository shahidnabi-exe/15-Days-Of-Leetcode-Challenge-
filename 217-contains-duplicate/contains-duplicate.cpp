class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        sort(arr.begin(), arr.end()); 
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) {
                return true;
            }
        }
        return false;
    }
};
