class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        
        if (arr.empty()) return;
        int n =arr.size();
        if(k > n){
            k = k % n;
        }

        vector<int> temp(n);
        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = arr[i];
        }
        arr = temp;
        

        


    }
};