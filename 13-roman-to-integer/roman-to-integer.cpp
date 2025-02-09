class Solution {
public:
    int val(char ch){
        if(ch == 'I')   return 1;
        else if(ch == 'V')    return 5;
        else if (ch == 'L')   return 50;
        else if(ch == 'X')    return 10;
        else if(ch == 'M')    return 1000;
        else if(ch == 'C')    return 100;
        else if(ch == 'D')    return 500;        
        else return -1;
    }
    int romanToInt(string s) {

        int res = 0;
        for (int i = 0; i < s.length();  i++){

            int s1 = val(s[i]);
            if(i + 1 < s.length()) {

                int s2 = val(s[i+1]);
                if (s1 >= s2) {
                    res += s1;
                }
                else {
                    res += (s2 - s1);
                    i++;    
                }
            }
            else res += s1;
        }
        return res;
    }
};