#include <iostream>
#include <string>
using namespace std;

string is_prime(int N) {
  for(int i = 2; i * i <= N; i++) {
    if (N % i == 0) {
      return "not prime";
    }
  }
  return "prime";
}

int main() {
  int total_item, N;

  cout << "Total_Item: ";
  cin >> total_item;
  while (total_item--)
  {
      cout << "Input: ";
      cin >> N;
      cout << is_prime(N) << endl;
  }

  return 0;
}
