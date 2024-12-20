class Solution {
public:
    int majorityElement(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            int count = 0;
            for(int j = 0; j < arr.size(); j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    if(count > arr.size() / 2){
                        return arr[i];
                    }
                }
            }
        }
        return -1;
    }
};