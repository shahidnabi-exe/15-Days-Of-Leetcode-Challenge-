class Solution {
public:
    vector<int> getRow(int row) {
        long long ans = 1;
        vector<int> v;
        v.push_back(1);
        for(int col = 1; col <= row; col++) {
            ans = ans * (row - col + 1);
            ans = ans/(col);
            v.push_back(ans);
        }
        return v;
    }
    vector<vector<int>> generate(int N) {
        vector<vector<int>> v;
        for (int i = 0; i < N; i++ ){
            v.push_back(getRow(i));
        }
        return v;
    }
};