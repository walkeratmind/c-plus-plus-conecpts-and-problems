#include "iostream"

#include "string"

using namespace std;

int main()
{
  string words = "abcdefghijkl";

  string new_word;

  for (int i = 0; i < words.length(); i++)
  {
    if ((i + 4) % 4 == 0)
    {
      char firstChar = words[i];
      char secondChar = words[i + 1];
      char thirdChar = words[i + 2];
      char fourthChar = words[i + 3];

      swap(secondChar, thirdChar);
      swap(firstChar, fourthChar);

      new_word += firstChar;
      new_word += secondChar;
      new_word += thirdChar;
      new_word += fourthChar;
    }

    cout << "Iteration: " << i << endl;
    cout << "New String: " << new_word << endl;
  }
}