#ifndef COND_H_INCLUDED
#define COND_H_INCLUDED

#include<iostream>
#include<string.h>
using namespace std;

class Cond{
private:
    string cond[18][2];
public:
    Cond(){
        cond[0][0] = "0000",cond[0][1] = "EQ";
        cond[1][0] = "0001",cond[1][1] = "NE";
        cond[2][0] = "0010",cond[2][1] = "CS";
        cond[3][0] = "0010",cond[3][1] = "HS";
        cond[4][0] = "0011",cond[4][1] = "CC";
        cond[5][0] = "0011",cond[5][1] = "LO";
        cond[6][0] = "0100",cond[6][1] = "MI";
        cond[7][0] = "0101",cond[7][1] = "PL";
        cond[8][0] = "0110",cond[8][1] = "VS";
        cond[9][0] = "0111",cond[9][1] = "VC";
        cond[10][0] = "1000",cond[10][1] = "HI";
        cond[11][0] = "1001",cond[11][1] = "LS";
        cond[12][0] = "1010",cond[12][1] = "GE";
        cond[13][0] = "1011",cond[13][1] = "LT";
        cond[14][0] = "1100",cond[14][1] = "GT";
        cond[15][0] = "1101",cond[15][1] = "LE";
        cond[16][0] = "1110",cond[16][1] = "AL";
        cond[17][0] = "1111",cond[17][1] = "NV";
    };
    string getCode(string name){
        for(int i = 0; i < 18; i++){
            if(name == cond[i][1]){
                return cond[i][0];
            }
        }
        return "";
    }
};


#endif // COND_H_INCLUDED
