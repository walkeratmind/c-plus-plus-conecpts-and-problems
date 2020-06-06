#include "iostream"
#include "vector"
#include "math.h"

/*
------------------------------------------------------------
- title: numbers_with_even_num_digit.cpp
- Author: Rakesh Niraula
- copyright (C) 2020. All rights reserved
- date: 2020-05-22 07:40:23
------------------------------------------------------------
*/

/*

Given an array nums of integers, return how many of them contain an even number of digits.

Example 1:

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.

Example 2:

Input: nums = [555,901,482,1771]
Output: 1 
Explanation: 
Only 1771 contains an even number of digits.

Constraints:

    1 <= nums.length <= 500
    1 <= nums[i] <= 10^5


*/

using namespace std;

class Solution
{
private:
  /* data */
public:
  int count = 0;
  Solution(/* args */);
  ~Solution();

  int findNumbers(vector<int> &nums);

  int findNumbersInMathApproach(vector<int> &nums);
};

Solution::Solution()
{
}

Solution::~Solution()
{
}

int Solution::findNumbers(vector<int> &nums)
{
  for (auto num : nums)
  {
    int totalDigit = 0;

    // cout << "quotient: " << quotient << endl;
    while (num)
    {
      totalDigit++;
      num = num / 10;
      // cout << "totalDigit: " << totalDigit << endl;
    }

    if (totalDigit % 2 == 0)
      count++;
  }

  return count;
}

int Solution::findNumbersInMathApproach(vector<int> &nums)
{
  int counter = 0, totalDigits;
  for (auto num : nums)
  {
    totalDigits = floor(log10(num)) + 1;
    if (totalDigits % 2 == 0)
      counter++;
  }
  return counter;
}

int main()
{

  vector<int> nums = {12, 345, 2, 6, 7896};

  Solution solution;
  int total = solution.findNumbers(nums);
  cout << "Output: " << total << endl;

  cout << "Approach 2: " << solution.findNumbersInMathApproach(nums) << endl;
  return 0;
}