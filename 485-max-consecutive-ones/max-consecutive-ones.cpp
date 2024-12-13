class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int c = 0;
        int max = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == 1) {
                c++;
                if(c > max) {
                    max ++;
                }
            }
            else {
                c = 0;
            }
        }
        return max;
    }
};