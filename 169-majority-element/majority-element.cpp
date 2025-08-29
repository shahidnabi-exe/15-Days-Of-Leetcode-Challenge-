class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.empty()) return 0;
        int n = nums.size();
        int m = floor(n / 2);
        int count ;
        for (int i = 0; i < n; i++ ) {
            count = 1;
            for(int j = i+1; j < n; j++){
                if(nums[i] == nums[j]){
                    count++;
                }                
            }
            if(count > m ) return nums[i];
        }
        return 0;
    }
};