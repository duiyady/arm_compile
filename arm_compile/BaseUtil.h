#ifndef BASEUTIL_H_INCLUDED
#define BASEUTIL_H_INCLUDED
#include<iostream>
#include"DataHandle.h"
#include"BaseUtil.h"
#include"string.h"
using namespace std;
class BaseUtil{
public:
static string trim(string &s){
    string result = s;
    int index = result.find(" ");
    while(index == 0){
        result = result.substr(index+1,result.length());
        index = result.find(" ");
    }
    while(result.substr(result.length()-1,result.length()) == " "){
        result = result.substr(0,result.length() - 1);
    }
    return result;
}
static DataHandle &getDataHandle(string message){
    DataHandle data;
    string temp1 = BaseUtil::trim(message);
    int index = temp1.find(" ");
    if(index == -1){
        return data;
    }
    string temp2 = temp1.substr(0,index);
    if(temp2.length()>3 && temp2.length() < 6){
        data.setOpcode(temp2.substr(0,3));
        temp2 = temp2.substr(3,temp2.length());
        if(temp2.length()>1){
            data.setCond(temp2.substr(0,2));
            if(temp2.length() > 2){
                data.setS("S");
            }
        }else{
            data.setS("S");
        }
    }
    temp1 = temp1.substr(index+1,temp1.length());
    temp1 = BaseUtil.trim();
    string array[4];
    while(temp1.find(",") != -1){

    }

    return data;

}

};

#endif // BASEUTIL_H_INCLUDED
