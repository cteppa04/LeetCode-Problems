#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    int getNum(char ch)
    {
        switch (ch)
        {
        case 'I': return 1;
            break;
        case 'V': return 5;
            break;
        case 'X': return 10;
            break;
        case 'L': return 50;
            break;
        case 'C': return 100;
            break;
        case 'D': return 500;
            break;
        case 'M': return 1000;
            break;
        default: return 0;
            break;
        }
    }
    int romanToInt(string s) 
    {
        int result = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (getNum(s[i]) >= getNum(s[i + 1]))
            {
                result += getNum(s[i]);
            }
            else
            {
                result -= getNum(s[i]);
            }
        }
        return result;
    }
};

int main()
{
    string str;
    int result;
    Solution sol;

    str = "III";
    result = sol.romanToInt(str);
    cout << str << " = " << result << " in integer\n";

    str = "LVIII";
    result = sol.romanToInt(str);
    cout << str << " = " << result << " in integer\n";

    str = "MCMXCIV";
    result = sol.romanToInt(str);
    cout << str << " = " << result << " in integer\n";

    return 0;
}