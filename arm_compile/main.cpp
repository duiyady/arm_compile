#include <iostream>
#include<string.h>
#include"Cond.h"
#include"BaseUtil.h"
#include"DataHandle.h"
using namespace std;

string trim(string s);
int main(){
    string s = "  MOVd R0,R1    ";
   // s = BaseUtil::trim(s);
    DataHandle *da = new DataHandle;
    BaseUtil::getDataHandle(s);
    delete da;

}

