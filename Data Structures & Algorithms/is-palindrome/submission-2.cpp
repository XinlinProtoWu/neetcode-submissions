class Solution {
public:
  bool isPalindrome(string s) {
    int fdx = 0;
    int rdx = s.size() - 1;
    while (fdx < rdx) {
      if (!isalnum(s[fdx]))
        fdx++;
      else if (!isalnum(s[rdx]))
        rdx--;
      else {
        if (tolower(s[fdx++]) != tolower(s[rdx--])) {
          return false;
        }
      }
    }
    return true;
  }
};