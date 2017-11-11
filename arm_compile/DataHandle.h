#ifndef DATAHANDLE_H_INCLUDED
#define DATAHANDLE_H_INCLUDED
#include<iostream>
#include<string.h>
using namespace std;
class DataHandle{
private:
    string cond;
    string flag1;
    string opcode;
    string s;
    string rd;
    string rn;
    string operand;
public:
    void setCond(string cond){
        this->cond = cond;
    }
    string getCond(){
        return this->cond;
    }
    void setFlag1(string flag1){
        this->flag1 = flag1;
    }
    string getFlag1(){
        return this->flag1;
    }
    void setOpcode(string opcode){
        this->opcode = opcode;
    }
    string getOpcode(){
        return this->opcode;
    }
    void setS(string s){
        this->s = s;
    }
    string getS(){
        return this->s;
    }
    void setRd(string rd){
        this->rd = rd;
    }
    string getRd(){
        return this->rd;
    }
    void setRn(string rn){
        this->rn = rn;
    }
    string getRn(){
        return this->rn;
    }
    void setOperand(string operand){
        this->operand = operand;
    }
    string getOperand(){
        return this->operand;
    }
};

#endif // DATAHANDLE_H_INCLUDED
