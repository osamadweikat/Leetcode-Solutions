class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int start = s.size() - 1;

        while(start >= 0 && s[start] == ' '){
            start--;
        }
        while(start >= 0 && s[start] != ' '){
            len++;
            start--;
        }
        return len;
    }
};