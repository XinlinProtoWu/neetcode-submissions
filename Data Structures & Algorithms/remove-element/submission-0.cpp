class Solution {
public:
  int removeElement(vector<int> &nums, int val) {
    int k = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != val) {
        // this is genius because if nums[i] is the target value, k wouldn't be
        // incremented, therefore the next time a value is stored into index k
        // it overwrites the target value
        nums[k++] = nums[i];
      }
    }
    return k;
  }
};