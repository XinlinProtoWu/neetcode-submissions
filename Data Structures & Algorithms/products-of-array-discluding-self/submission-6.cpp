class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    int size = nums.size();
    vector<int> res(size, 1);

    int prefix = 1;
    for (int idx = 0; idx < size; idx++) {
      res[idx] *= prefix;
      prefix *= nums[idx];
    }

    int postfix = 1;
    for (int idx = size - 1; idx >= 0; idx--) {
      res[idx] *= postfix;
      postfix *= nums[idx];
    }
    return res;
  }
};