class Solution {
public:
    bool isPalindrome(string s) {
        string a = "";
        for(int i{}; i < s.size(); i++){
            if (isalnum(s[i])){
                a += s[i];
            }
        }
        int x = 0;
        int y = a.size() - 1;
        for (int i{}; i < a.size(); i++){
            if (x > y) return true;
            if (tolower(a[x]) != tolower(a[y])) return false;
            x++;
            y--;
        }
        return true;
    }
};
