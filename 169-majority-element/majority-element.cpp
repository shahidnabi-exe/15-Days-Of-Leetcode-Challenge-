class Solution {
public:
    int majorityElement(vector<int>& arr) {
        // Brute Force Solution
        // for (int i = 0; i < arr.size(); i++) {
        //     int count = 0;
        //     for(int j = 0; j < arr.size(); j++) {
        //         if (arr[i] == arr[j]) {
        //             count++;
        //             if(count > arr.size() / 2){
        //                 return arr[i];
        //             }
        //         }
        //     }
        // }
        // return -1;
        // Better solution
        unordered_map<int, int> map;
        for (int i = 0; i < arr.size(); i++) {
            map[arr[i]]++;
        }

        for(auto it : map) {
            if(it.second > arr.size()/2) {
                return it.first;
            }
        }
        return -1;

    }
};