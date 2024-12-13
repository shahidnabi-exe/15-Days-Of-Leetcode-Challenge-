class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int c = 0;
        int m = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == 1) {
                c++;
                m = max(m ,c);
            }
            else {
                c = 0;
            }
        }
        return m;
    }
};