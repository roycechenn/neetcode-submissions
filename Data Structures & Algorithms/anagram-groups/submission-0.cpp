class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;

        for (const auto &s : strs){
            string sorted_string = s;
            sort(sorted_string.begin(), sorted_string.end());

            hashmap[sorted_string].push_back(s);
        }

        vector<vector<string>> result;

        for (const auto &p : hashmap) result.push_back(p.second);

        return result;
    }
};
