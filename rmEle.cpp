#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  int removeElement(vector<int> &nums, int val) {
    int i = 0;
    int j = 0;
    for (; i < nums.size();i++,j++ ) {
      if (nums[i] == val) {
        i++;
      }
      nums[j] = nums[i];
    }
    return j;
  }
};
int main(){
  Solution s;
  vector<int> test = {3,2,2,3};
  int len =s.removeElement(test,3);
  cout<<"len is"<<" "<<len<<endl;
  for (size_t i = 0; i < len; i++) {
    cout<<test[i]<<' ';
  }
  cout <<endl;
  return 0;
}
