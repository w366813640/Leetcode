/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 *
 * https://leetcode-cn.com/problems/reverse-integer/description/
 *
 * algorithms
 * Easy (33.79%)
 * Likes:    1743
 * Dislikes: 0
 * Total Accepted:    298.5K
 * Total Submissions: 882K
 * Testcase Example:  '123'
 *
 * 给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
 * 
 * 示例 1:
 * 
 * 输入: 123
 * 输出: 321
 * 
 * 
 * 示例 2:
 * 
 * 输入: -123
 * 输出: -321
 * 
 * 
 * 示例 3:
 * 
 * 输入: 120
 * 输出: 21
 * 
 * 
 * 注意:
 * 
 * 假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为 [−2^31,  2^31 − 1]。请根据这个假设，如果反转后整数溢出那么就返回
 * 0。
 * 
 */

// @lc code=start

/*INT_MAX,INT_MIN由标准头文件<limits.h>定义。
INT_MAX=2^31-1(2,147,483,647)
INT_MIN=-2^31(-2,147,483,648)

作者：yang-yang-yang-73
链接：https://leetcode-cn.com/problems/reverse-integer/solution/yyxue-xi-bi-ji-16-by-yang-yang-yang-73/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。*/
#include <limits.h>
#include <stdint.h>
class Solution {
public:
    int reverse(int x) {
            int temp = x;
            int anwser = 0;
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
        if(anwser >= INT32_MAX || anwser <= INT32_MIN)
        return 0;
        return anwser;
    }
            
};
// @lc code=end

