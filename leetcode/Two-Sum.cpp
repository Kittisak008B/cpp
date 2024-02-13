#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
      for (int j = 0 ; j < nums.size() ; j++){

        if (i !=j && nums[i] + nums[j] == target) {
                    return {i, j};
        }
      }
    }
    return {};
  }
};

// call twoSum with input [3,2,5,14,7] and output 19
int main() {
  Solution s;
  vector<int> nums = {3,2,5,14,7};
  int target = 19;
  vector<int> result = s.twoSum(nums, target);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << endl;
  }
  return 0;
}
