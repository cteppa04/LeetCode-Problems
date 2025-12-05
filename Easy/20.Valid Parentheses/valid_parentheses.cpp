#include <iostream>
#include <string>

using namespace std;

class Solution 
{
public:
    bool isValid(string s) 
    {
        char ch;
        for (int i = 0; i < s.length(); i++)
        {
            
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string value;
    cout << boolalpha;

    value = "()";
    cout << "For value: " << value << ", is valid: " << sol.isValid(value) << endl;

    value = "()[]{}";
    cout << "For value: " << value << ", is valid: " << sol.isValid(value) << endl;

    value = "(]";
    cout << "For value: " << value << ", is valid: " << sol.isValid(value) << endl;

    value = "([])";
    cout << "For value: " << value << ", is valid: " << sol.isValid(value) << endl;

    value = "([)]";
    cout << "For value: " << value << ", is valid: " << sol.isValid(value) << endl;

    return 0;
}