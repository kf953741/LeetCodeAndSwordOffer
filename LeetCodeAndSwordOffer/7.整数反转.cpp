/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        long result = 0;
        while (x != 0)
        {
            result = result * 10 + x % 10;
            x /= 10;
        }
        return (result > INT_MAX || result < INT_MIN) ? 0 : result;
    }
};
// @lc code=end
