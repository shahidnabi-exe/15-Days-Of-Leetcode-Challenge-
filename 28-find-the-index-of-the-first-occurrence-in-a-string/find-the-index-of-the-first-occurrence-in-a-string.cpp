class Solution {
public:
    int strStr(string s1, string s2) {
        if(s2.empty()) return  -1;
        if (s2.size() > s1.size()) return -1;
        if(s1.size() == s2.size() ) return s1 == s2 ? 0 : -1;    
        for (int i = 0; i < s1.size() ; i++) {
            bool flag = true;
            for(int j = 0; j < s2.size(); j++) {
                if(s1[i+j] != s2[j]) {
                    flag = false;
                    break;
                }
            }
            if(flag) return i;
        }
        return -1;
     }
};
