//
// Created by Антон Шмидт on 06.12.2021.
//

#include "solution.h"
#include <algorithm>

using namespace std;

std::vector<int> Solution::sortedSquares(std::vector<int> &nums) {
  auto iter_first_non_negative = lower_bound(nums.begin(), nums.end(), 0);

  for (auto &n: nums) {
    n = n * n;
  }

  if (nums.end() == iter_first_non_negative) {
    reverse(nums.begin(), nums.end());
  } else if (nums.begin() != iter_first_non_negative) {
    reverse(nums.begin(), iter_first_non_negative);
    vector<int> result;
    result.resize(nums.size());
    merge(nums.begin(), iter_first_non_negative, iter_first_non_negative, nums.end(), result.begin());
    return result;
  }

  return nums;
}
