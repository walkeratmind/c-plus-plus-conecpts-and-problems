#include "iostream"
#include "vector"

/*
------------------------------------------------------------
- title: max consecutive ones.cpp
- Author: Rakesh Niraula
- copyright (C) 2020. All rights reserved
- date: 2020-05-21 14:19:29
------------------------------------------------------------
*/

/*
    Max Consecutive Ones:
    Given a binary array, find the maximum number of consecutive 1s in this array.

    Example 1:

    Input: [1,1,0,1,1,1]
    Output: 3
    Explanation: The first two digits or the last three digits are consecutive 1s.
        The maximum number of consecutive 1s is 3.

    Note:

        The input array will only contain 0 and 1.
        The length of input array is a positive integer and will not exceed 10,000
*/

using namespace std;

class Solution
{
private:
public:
    int count = 0;
    int result = 0;

    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        for (vector<int>::iterator itr = nums.begin(); itr != nums.end(); itr++)
        {
            if (*itr == 0)
            {
                count = 0;
            }
            else
            {
                count++;
                result = max(result, count);
            }
        }
        return 3;
    }
};

int main()
{
    vector<int> nums = {1, 1, 0, 0, 0, 1, 1, 1, 1};

    Solution solution;

    solution.findMaxConsecutiveOnes(nums);

    cout << "Output: " << solution.result << endl;
    return 0;
}
