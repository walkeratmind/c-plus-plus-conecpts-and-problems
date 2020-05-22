#include <iostream>
#include "string"
using namespace std;

int main()
{
    string pallindrome = "dad";

    string username;

    bool isPallindrome;

    for (int i = 0; i < pallindrome.size(); i++)
    {
        if (pallindrome[i] == pallindrome[pallindrome.length() - 1 - i])
        {
            isPallindrome = true;
        }
        else
        {
            isPallindrome = false;
        }

        cout << pallindrome[i] << "== " << pallindrome[pallindrome.size() - 1 - i] << ": status: " << isPallindrome << endl;
    }

    cout << "isPallindrome: " << pallindrome << "status: " << isPallindrome << endl;

    cout << username << endl;

    return 0;
}