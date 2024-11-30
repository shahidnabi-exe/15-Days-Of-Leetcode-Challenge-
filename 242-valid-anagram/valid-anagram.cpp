class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.empty() || t.empty()) return false;

        if (s.empty() && t.empty()) return false;

        if(s.length() != t.length()){
            return false;
        }
        
        // for (int i = 0; i < s.length(); i++){
        //     for (int j = 0; j < t.length(); j++){
        //         if(s[i] == t[j]){
        //             break;
        //         }
        //         else continue;
        //     }

        // }
        // return true;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;

    }
};