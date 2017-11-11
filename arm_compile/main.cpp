#include <iostream>
#include<vector>
#include<string>
#include "opcode.h"

using namespace std;

vector<string> split(const string &s, const string &seperator){
  vector<string> result;
  typedef string::size_type string_size;
  string_size i = 0;

  while(i != s.size()){
        //找到字符串中首个不等于分隔符的字母；
        int flag = 0;
        while(i != s.size() && flag == 0){
          flag = 1;
          for(string_size x = 0; x < seperator.size(); ++x)
            if(s[i] == seperator[x]){
                ++i;
            flag = 0;
                break;
            }
        }

        //找到又一个分隔符，将两个分隔符之间的字符串取出；
        flag = 0;
        string_size j = i;
        while(j != s.size() && flag == 0){
          for(string_size x = 0; x < seperator.size(); ++x)
            if(s[j] == seperator[x]){
                flag = 1;
            break;
            }
        if(flag == 0)
            ++j;
        }
        if(i != j){
            result.push_back(s.substr(i, j-i));
            i = j;
        }
    }
    return result;
};

int main()
{
    opcode m;
    string i = m.get("fdja");
    if(i.size() != 0)
        cout<<i;
    vector<string> str = split("m fj,sjl,jk"," ,");
    for(vector<string>::size_type j = 0; j<str.size(); j++)
        cout<<str[j]<<endl;
    return 0;
}
