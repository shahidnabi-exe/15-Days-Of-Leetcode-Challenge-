class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {        
        vector<int> v;
        if(arr.empty()) return v;
        int n = arr.size();
        int m = floor(n / 3);
        unordered_set<int> s; // keep track of s elements

        for (int i = 0; i < n; i++ ) {
            if (s.count(arr[i])) continue; // skip if already s
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) count++;
            }            
            if (count > m) {
                v.push_back(arr[i]);
                s.insert(arr[i]);
            }
        }
        return v;
    }
};
