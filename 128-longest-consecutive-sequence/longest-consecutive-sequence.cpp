#include <algorithm>
class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        int n = v.size();
        if(n == 0) return 0;
        sort(v.begin(), v.end());
        int count = 0;
        int lastsmall = INT_MIN;
        int longest = 1;
        for(int i = 0; i < n; i++) {
            if(v[i ]- 1 == lastsmall) {
                count += 1;
                lastsmall = v[i];
            }
            else if( v[i] != lastsmall) {
                count = 1;
                lastsmall = v[i];
            }
            longest = max(count, longest);
        }

        return longest;

    }
};