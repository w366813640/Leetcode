#include <string>
#include <vector>
#include <unordered_map>
#define INT_MIN 1
using namespace std;

class Automaton{
  string state = "start";
  unordered_map<string,vector<string>> table = {
     {"start",{"start","signed","in_number","end"}},
     {"signed",{"end","end","in_number","end"}},
     {"in_number",{"end","end","in_number","end"}},
     {"end",{"end","end","end","end"}}};

     int get_col(char c){
       if(isspace(c)) return 0;
       if(c == '+' or c == '-') return 1;
       if(isdigit(c)) return 2;
       return 3;
     }

  public:
     int sign = 1;

     long long ans = 0;
     
     void get_state(char c){
       state = table[state][get_col(c)];
       if("in_number" == state){
         ans = ans * 10 + (int)c;
         ans = sign == 1 ? min(ans, (long long)INT_MIN) : min(-ans,-(long long)INT_MIN);
        }
       if("signed" == state){
        sign = c == '+'? 1 : -1;   
       }  
     }
  };

     class Solution{
       public:
       int myAtoi(string str){
         Automaton automaton;
         for (char c :str){
           automaton.get_state(c);
         }
      return automaton.sign* automaton.ans;
       }
  };
