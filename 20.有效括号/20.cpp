#include <iostream>
#include <unordered_map>
#include <string>
#include <stack>
#include <string>

using namespace std;
class Solution{
  public:
    bool isValid(string s){
      unordered_map<char,int> m;
      m['(']=1;
      m['[']=2;
      m['{']=3;
      m[')']=4;  
      m[']']=5;
      m['}']=6;
      stack<char> st;
      bool istrue;
      for(char c : s){
        int flag = m[c];
        if(m[c]<=3&&m[c]>=1)
          st.push(c);
        else(!st.empty()&&m[st.top()]==flag-3)
          st.pop();
      }
      if(!st.empty()) istrue =false;
      return istrue;
    }
}

int main(){
  Solution P;
  cout<<P.isValid("(){}[]")<<endl;
  return 0;
}
