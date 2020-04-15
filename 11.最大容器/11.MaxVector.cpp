#include <iostream>
#include <vector>

using namespace std;

int MaxVector(vector<int>& height)
{
  int res = 0;
  int i = 0;
  int j = height.size()-1;
  while(i<j)
  {
    int area = (j-i) * min(height[i],height[j]);
    if(height[i]<height[j])
    {
      i++;
    }else{
      j--;
    }
    res = max(area,res);

  }
  return res;
}


int main(){
 vector<int> testcase{1,8,6,2,5,4,8,3,7};
 int result = MaxVector(testcase);
 cout<<result<<endl;
}
