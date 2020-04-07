#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> m;

        for(int i=0;i<nums.size();i++)
            m[nums[i]]=i;   //向map中添加元素
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end()&&m[target-nums[i]]!=i)//m中存在对应的键值，并且不为i
                return {i,m[target-nums[i]]};
        }
        return {};
    }
};
