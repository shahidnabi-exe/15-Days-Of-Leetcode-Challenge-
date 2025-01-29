class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool flag = false;
        for (int i = s.size() - 1; i >= 0 ; i--){
            if((s[i] >= 'a' && s[i] <= 'z' )|| (s[i] >= 'A' && s[i] <= 'Z')){
                flag = true;
                length++;
            }
            else if(flag == true){
                    return length;
            }
            else {
                continue;
            }
        }
        return length;
    }
};