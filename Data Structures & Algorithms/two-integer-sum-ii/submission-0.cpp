class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int fdx = 0;
        int rdx = numbers.size() - 1;
        while (fdx < rdx) {
            int result = numbers[fdx] + numbers[rdx];
            if (result < target) {
                fdx++;
            } else if (result > target) {
                rdx--;
            } else if (result == target) {
                return {fdx + 1, rdx + 1};
            }
        }
        return {fdx, rdx};
    }
};
