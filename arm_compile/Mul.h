#ifndef MUL_H_INCLUDED
#define MUL_H_INCLUDED
#include<iostream>
#include <string.h>
using namespace std;

class Mul{
private:
    string mul[6][2];
public:
    Mul(){
        mul[0][0] = "000",mul[0][1] = "MUL";
        mul[1][0] = "001",mul[1][1] = "MLA";
        mul[2][0] = "100",mul[2][1] = "UMLL";
        mul[3][0] = "101",mul[3][1] = "UMLAL";
        mul[4][0] = "110",mul[4][1] = "SMULL";
        mul[5][0] = "111",mul[5][1] = "SMLAL";
    };
    string getMul(string name){
        for(int i = 0; i < 6; i++){
            if(name == cond[i][1]){
                return cond[i][0];
            }
        }
        return "";
    }

};

#endif // MUL_H_INCLUDED
