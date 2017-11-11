#ifndef OPCODE_H_INCLUDED
#define OPCODE_H_INCLUDED

#include<iostream>
#include<string.h>
using namespace std;

class opcode{
private:
    string m_opcode[16][2];
public:
    opcode()
    {
        m_opcode[0][0] = "0000"; m_opcode[0][1] = "AND";
        m_opcode[1][0] = "0001"; m_opcode[1][1] = "EOR";
        m_opcode[2][0] = "0010"; m_opcode[2][1] = "SUB";
        m_opcode[3][0] = "0011"; m_opcode[3][1] = "RSB";
        m_opcode[4][0] = "0100"; m_opcode[4][1] = "ADD";
        m_opcode[5][0] = "0101"; m_opcode[5][1] = "ADC";
        m_opcode[6][0] = "0110"; m_opcode[6][1] = "SBC";
        m_opcode[7][0] = "0111"; m_opcode[7][1] = "RSC";
        m_opcode[8][0] = "1000"; m_opcode[8][1] = "TST";
        m_opcode[9][0] = "1001"; m_opcode[9][1] = "TEQ";
        m_opcode[10][0] = "1010";m_opcode[10][1] = "CMP";
        m_opcode[11][0] = "1011";m_opcode[11][1] = "CMN";
        m_opcode[12][0] = "1100";m_opcode[12][1] = "ORR";
        m_opcode[13][0] = "1101";m_opcode[13][1] = "MOV";
        m_opcode[14][0] = "1110";m_opcode[14][1] = "BIC";
        m_opcode[15][0] = "1111";m_opcode[15][1] = "MVN";
        };
    string get(string s)
    {
        for(int i=0; i<16; i++)
        {
            if(s == m_opcode[i][1])
                return m_opcode[i][0];
        }
        return "";
    }
};


#endif // OPCODE_H_INCLUDED
