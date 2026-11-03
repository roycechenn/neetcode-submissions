class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> idx_str = {"", "", "abc", "def", "ghi","jkl", "mno", "pqrs","tuv","wxyz"};

        vector<string> res = {""};

        for (char digit : digits){
            vector<string> tmp;
            for (string &currStr : res){
                for (char c : idx_str[digit - '0'])
                    tmp.push_back(currStr + c);
            }

            res = tmp;
        }

        return res;
    }
};
