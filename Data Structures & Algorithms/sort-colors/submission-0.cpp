#include <vector>
using namespace std;
class Solution {
public:
  void sortColors(vector<int> &nums) {
    vector<int> count(3,0);
    for (int &num : nums) {
      count[num]++;
    }
    int resultIdx = 0;
    for (int idx = 0; idx < 3; idx++) {
      while (count[idx]-- > 0) {
        nums[resultIdx++] = idx;
      }
    }
  }
};