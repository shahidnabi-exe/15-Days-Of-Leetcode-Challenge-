class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        vector<int> temp; 
        for (int i = 0; i < arr.size(); i++ ) {
            if(arr[i] != 0) {
                temp .push_back(arr[i]);
            }
        }    
        for (int i = 0; i < arr.size(); i++ ) {
            if(arr[i] == 0) {
                temp .push_back(arr[i]);
            }
        }    

        arr = temp;  

    }
};