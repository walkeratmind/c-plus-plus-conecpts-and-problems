# LeetCode Problems

## Array

### 1. Max Consecutive Ones

Given a binary array, find the maximum number of consecutive 1s in this array.

**Example 1:**

```c++
Input: [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
    The maximum number of consecutive 1s is 3.
```

**Note:**

- The input array will only contain `0` and `1`.
- The length of input array is a positive integer and will not exceed 10,000

[**Solution**]()

### 2. Find Numbers with Even Number of Digits

Given an array `nums` of integers, return how many of them contain an **even number** of digits.

**Example 1:**

```
Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.
```

**Example 2:**

```
Input: nums = [555,901,482,1771]
Output: 1 
Explanation: 
Only 1771 contains an even number of digits.
```

 

**Constraints:**

- `1 <= nums.length <= 500`
- `1 <= nums[i] <= 10^5`