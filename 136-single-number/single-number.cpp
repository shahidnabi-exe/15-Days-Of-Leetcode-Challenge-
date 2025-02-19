class Solution {
public:
    int singleNumber(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++) {
            int count = 0;            
            for ( int j = 0; j < arr.size(); j++) {
                if (arr[j] == arr[i]) {
                    count++;
                }
            }    
            if(count == 1)   return arr[i];
        }
        return -1;
    }
};