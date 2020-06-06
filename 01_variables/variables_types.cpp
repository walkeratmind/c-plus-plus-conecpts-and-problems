#include <iostream>

using namespace std;

int main()
{
  int i1 = 1;
  cout << "i1: " << i1 << endl;

  int i2;
  i2 = 2;
  cout << "i2: " << i2 << endl;

  int i3(3);
  cout << "i3: " << i3 << endl;

  int i4{4};
  cout << "i4: " << i4 << endl;

  double d1 = 2.2;
  double d2 = i1;
  int i5 = d1;
  cout << "d1: " << d1 << endl;
  cout << "d2: " << d2 << endl;
  cout << "i5 : " << i5 << endl;

  char c1 = 'a';
  cout << "c1: " << c1 << endl;

  bool flag = false;
  cout << "flag: " << flag << endl;

  flag = i1;
  cout << "flag: " << flag << endl;

  flag = d1;
  cout << "flag: " << flag << endl;

  auto a1 = 1;
  auto a2 = 2.2;
  auto a3 = 'c';
  auto a4 = "s";
  auto a5 = true;
  auto a6 = 3L;
  auto a7 = 1'000'000'000'000;
  auto a8 = 0xFF; // 255
  auto a9 = 0b11; // 7

  a1 = a2;
}