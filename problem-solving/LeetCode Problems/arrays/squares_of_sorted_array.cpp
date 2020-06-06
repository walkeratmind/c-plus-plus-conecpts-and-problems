#include "iostream"
#include "vector"

/*
Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.

Example 1:

Input: [-4,-1,0,3,10]
Output: [0,1,9,16,100]

Example 2:

Input: [-7,-3,2,3,11]
Output: [4,9,9,49,121]

Note:

   1. 1 <= A.length <= 10000
   2. -10000 <= A[i] <= 10000
   3. A is sorted in non-decreasing order.

*/

using namespace std;
class Solution
{
public:
  vector<int> sortedSquares(vector<int> &A);
};

vector<int> Solution::sortedSquares(vector<int> &A)
{
  vector<int> squares;
  int sq, sqFirst;
  for (auto num : A)
  {

    // sqFirst = A.at(0) * A.at(0);
    sq = num * num;
    squares.push_back(sq);
  }

  return squares;
}
int main()
{

  Solution solution;

  vector<int> nums = {-4, -1, 0, 3, 10};

  vector<int> squares = solution.sortedSquares(nums);

  for (auto num : squares)
  {
    cout << num << endl;
  }
  return 0;
}
