class Solution {
public:
    int singleNumber(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++) {
            int count = 0;
            int num = arr[i];
            for ( int j = 0; j < arr.size(); j++) {
                if (arr[j] == num) {
                    count++;
                }
            }    
            if(count == 1)   return num;
        }
        return -1;
    }
};