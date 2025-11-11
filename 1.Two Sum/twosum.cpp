#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution 
{
public:
    vector<int> twoSum(const vector<int>& nums, int target) 
    {
        if (target < -pow(10, 9) || target > pow(10, 9)) //check if the target value in range
        {
            return vector<int>();
        }

        if (nums.size() < 2 || nums.size() > pow(10, 4)) //check if array have the right size
        {
            return vector<int>();
        }

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] < -pow(10, 9) || nums[i] > pow(10, 9)) //check if the nums[i] value in range
            {
                return vector<int>();
            }
            for (int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target) //return solution
                {
                    return vector<int>({i, j});
                }
            }
        }
        return vector<int>();
    }
};

int main()
{
    Solution sol;
    vector<int> sum;
    vector<int> arr;
    int tar;
    
    arr = { 2, 7, 11, 15 };
    tar = 9;
    sum = sol.twoSum(arr, tar);
    cout << "solution: [" << sum[0] << "," << sum[1] << "]\n" << endl;

    arr = { 3, 2, 4 };
    tar = 6;
    sum = sol.twoSum(arr, tar);
    cout << "solution: [" << sum[0] << "," << sum[1] << "]\n" << endl;

    arr = { 3, 3 };
    tar = 6;
    sum = sol.twoSum(arr, tar);
    cout << "solution: [" << sum[0] << "," << sum[1] << "]\n" << endl;

    return 0;
}