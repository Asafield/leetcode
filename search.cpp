#include <vector>
using namespace std;
class Solution {
public:
  int search(vector<int> &nums, int target) {
    if (nums.size() == 0) {
      return -1;
    }
    int front = 0;
    int end = nums.size() - 1;
    int middle;
    while (end > front) {
      middle = front + (end - front) / 2;
      if (nums[middle] < target)
        end = middle;
      else if (nums[middle] > target) {
        front = middle;
      } else {
        return middle;
      }
    }
    return -1;
  }
};
