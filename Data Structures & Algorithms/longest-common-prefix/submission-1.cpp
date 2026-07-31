class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        for (int idx = 0; idx < strs[0].size(); idx++) {
            bool isPre = true;
            char c = strs[0][idx];
            for (const string& str : strs) {
                if (str[idx] != c) {
                    isPre = false;
                    return result;
                } 
            }
            if (isPre) {
                result += c;
            }
        }
        return result;
        }
    };