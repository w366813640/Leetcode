/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 *
 * https://leetcode.com/problems/reverse-integer/description/
 *
 * algorithms
 * Easy (25.63%)
 * Likes:    2951
 * Dislikes: 4657
 * Total Accepted:    982.5K
 * Total Submissions: 3.8M
 * Testcase Example:  '123'
 *
 * Given a 32-bit signed integer, reverse digits of an integer.
 * 
 * Example 1:
 * 
 * 
 * Input: 123
 * Output: 321
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: -123
 * Output: -321
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: 120
 * Output: 21
 * 
 * 
 * Note:
 * Assume we are dealing with an environment which could only store integers
 * within the 32-bit signed integer range: [−2^31,  2^31 − 1]. For the purpose
 * of this problem, assume that your function returns 0 when the reversed
 * integer overflows.
 * 
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
            int temp = x;
            long long anwser = 0;//int  long int 都是32位  需要用longlong存储
            int count = 0;
            int a = 0;
            while(x!=0){
                x /= 10;
                count++;
            }
            while (temp !=0)
            {
                
                a = temp % 10;
                temp /= 10;
                anwser = anwser + a*pow(10,count-1);
                count--;
            }
        //std::cout<<anwser<<std::endl;
        if(anwser >= INT32_MAX || anwser <= INT32_MIN)
        return 0;
        return anwser;
    }
};
// @lc code=end

