class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        
        vector <int> v;
        for(int i = 0; i < arr.size(); i++){
            for(int j = i+1; j < arr.size(); j++) {
                if (arr[i] + arr[j] == target) {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        return v;
    }
};