class Solution {
public:
    int missingNumber(vector<int>& arr) {
        for(int i = 0; i <= arr.size(); i++){
            bool f = false;
            for(int j = 0; j < arr.size(); j++){
                if(arr[j] == i ) {
                    f = true;
                    break;
                }
            }
            if(!f) {
                return i;
            }
        }
        return -1;
    }
};