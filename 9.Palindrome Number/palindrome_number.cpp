#include <iostream>
#include <string>
using namespace std;

class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        if (x < 0)
            return false;
        string str = to_string(x);
        for (int i = 0; i < str.length(); i++)
        {
            int j = str.length() - i - 1;
            if (str[i] != str[j])
                return false;
        }
        return true;
    }
};

int main()
{
    Solution sol;
    int value;
    cout << boolalpha;

    value = 121;
    cout << "Value " << value << " is a palindrome: ";
    cout << sol.isPalindrome(value) << endl;

    value = -121;
    cout << "Value " << value << " is a palindrome: ";
    cout << sol.isPalindrome(value) << endl;

    value = 10;
    cout << "Value " << value << " is a palindrome: ";
    cout << sol.isPalindrome(value) << endl;

    return 0;
}