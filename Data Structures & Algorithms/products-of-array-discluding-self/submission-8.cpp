class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    vector<int> result(nums.size());
    int prod = 1;
    int zeroCnt = 0;
    for (int num : nums) {
      if (!num) {
        zeroCnt++;
      } else {
        prod *= num;
      }
    }

    if (zeroCnt > 1) {
      return vector<int>(nums.size(), 0);
    }

    for (int idx = 0; idx < nums.size(); idx++) {
      if (zeroCnt) {
        result[idx] = (!nums[idx]) ? prod : 0;
      } else {
        result[idx] = prod / nums[idx];
      }
    }
    return result;
  }
};