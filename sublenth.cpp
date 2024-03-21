#include <algorithm>
#include <vector>
using namespace std;
class Solution{
  int minSubArrayLen(int target,vector<int>& nums){
    int front = 0;
    int result = nums.size()+1;
    int sum = 0;
    for(int j = 0;j<nums.size();j++){
      sum += nums[j];
      while(sum >= target){
        result = min(result,j - front + 1);
        sum -= nums[front];
        front++;
      }
    }
    if(result > nums.size()){
      return 0;
    }
    return result;
  }
};
