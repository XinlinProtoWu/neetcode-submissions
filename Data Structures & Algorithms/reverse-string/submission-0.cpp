class Solution {
public:
  void reverseString(vector<char>& s) {
    int idx = 0;
    int rdx = s.size()-1;
    while (idx < rdx) {
      swap(s[idx++], s[rdx--]);
    }
  }
};