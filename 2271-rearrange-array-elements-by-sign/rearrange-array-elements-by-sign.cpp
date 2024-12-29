class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int> p, n, arr1(arr.size());
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > 0){
                p.push_back(arr[i]);
            }
            else if(arr[i] < 0) {
                n.push_back(arr[i]);
            }
        }
        for (int i = 0; i < arr.size() / 2; i++){
            arr1[i * 2] = p[i];
            arr1[i * 2 + 1] = n[i];
        }
        return arr1;
    }
};