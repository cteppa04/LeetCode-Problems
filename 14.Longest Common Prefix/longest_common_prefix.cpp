#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string pref = "";
        bool BreakAll = false;
        int i, j;

        for (i = 0; strs[0][i] != '\0'; i++)
        {
            for (j = 0; j < strs.size() - 1; j++)
            {
                if(strs[j][i] == strs[j + 1][i])
                {
                    continue;
                }
                else
                {
                    BreakAll = true;
                    break;
                }
            }
            if (!BreakAll) 
            {
                pref.push_back(strs[0][i]);
            }
            else
            {
                break;
            }
        }

        return pref;
    }
};

int main()
{
    vector<string> vect;
    Solution sol;
    string str;

    vect = { "flower", "flow", "flight" };
    str = sol.longestCommonPrefix(vect);
    cout << "The logest prefix of: ";
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i];
        if (i + 1 != vect.size())
            cout << ", ";
    }
    cout << " = " << str << endl;

    vect = { "dog", "racecar", "car" };
    str = sol.longestCommonPrefix(vect);
    cout << "The logest prefix of: ";
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i];
        if (i + 1 != vect.size())
            cout << ", ";
    }
    cout << " = " << str << endl;

    vect = { "" };
    str = sol.longestCommonPrefix(vect);
    cout << "The logest prefix of: ";
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i];
        if (i + 1 != vect.size())
            cout << ", ";
    }
    cout << " = " << str << endl;

    return 0;
}