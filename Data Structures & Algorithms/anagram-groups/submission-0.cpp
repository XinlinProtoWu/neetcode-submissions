class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    unordered_map<string, vector<string>> mp;
    for (const auto &s : strs) {
      vector<int> count(26, 0);
      for (char c : s) {
        count[c - 'a']++;
      }
      string key = to_string(count[0]);
      for (int idx = 1; idx < 26; ++idx) {
        key += "," + to_string(count[idx]);
      }
      mp[key].push_back(s);
    }
    vector<vector<string>> result;
    for (const auto &pair : mp) {
      result.push_back(pair.second);
    }
    return result;
  }
};