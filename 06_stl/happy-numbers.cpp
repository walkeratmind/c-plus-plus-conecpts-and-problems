#include "iostream"

#include "vector"
#include "string"

using namespace std;

int main()
{
  int size = 10;
  // string nums = {"010001111"};
  string nums = "00001111";
  // int nums[] = {0};

  size = nums.length();

  char firstNum = nums[0];

  char lastNum = nums[size - 1];

  cout << lastNum << endl;

  int happyNum = 0;
  for (int i = 1; i < size - 1; i++)
  {
    cout << "Iteration: " << i << endl;
    char midNum = nums[i];

    char leftNum = nums[i - 1];
    char rightNum = nums[i + 1];

    cout << "left: " << leftNum << endl;
    cout << "mid: " << midNum << endl;
    cout << "right: " << rightNum << endl;

    if (i == 1)
    {
      if (leftNum == mirightNumdNum)
      {
        happyNum++;
      }
    }

    if (i == size - 2)
    {
      if (rightNum == midNum)
        happyNum++;
    }
    if (leftNum == midNum && rightNum == midNum)
    {

      happyNum++;
    }
  }

  cout << "happy num: " << happyNum << endl;
}
