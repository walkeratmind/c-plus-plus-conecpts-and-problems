#include <iostream>

using namespace std;

/*
  Problem statement
    Given a number N > 1 , count the number of factors of the number N.

  Input format
    A single line of input contains the number 1 ≤ N ≤ 10 12 .

  Output format
    Print a single integer equal to the number of factors of N .

  Input: 36
  Output: 9
*/

// Bruteforce Way

// Complexity: O(N)
int get_total_factors(long int N) {
  int count = 0;

  for (int i = 1; i <= N; i++) {
    if (N % i == 0) {
      count++;
    }
  }
  return count;
}

// Complexity: O(root(N))
int count_factors(long int N) {
  int count = 0;

  for (int i = 1; i * i <= N; i++) {
    if (N % i == 0) {
      count++;
      if (i != N / i) {
        count++;
      }
    }
  }

  return count;
}

int main() {
  long int N;

  cout << "Input: ";
  cin >> N;

  cout << "Output: " << get_total_factors(N) << endl;
  cout << "Output: " << count_factors(N) << endl;

  return 0;
}
