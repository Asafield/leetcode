#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> sortedSquares(vector<int> &nums) {
    int k = nums.size() - 1;
    int i = nums.size() - 1;
    vector<int> powa(nums.size());
    for (size_t j = 0; k >= 0;) {
      if (nums[i] * nums[i] > nums[j] * nums[j]) {
        powa[k--] = nums[i] * nums[i];
        i--;
      } else {
        powa[k--] = nums[j] * nums[j];
        j++;
      }
    }
    return powa;
  }
};
int main(int argc, char *argv[]) {
  Solution s;
  vector<int> a{-4, -1, 0, 3, 10};
  vector<int> p = s.sortedSquares(a);
  for (size_t i = 0; i < p.size(); i++) {
    cout << p[i] << " ";
  }
  cout << endl;
  return 0;
}
