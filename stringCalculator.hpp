//stringCalculator.hpp
//Ben Talotta
#ifndef FILE_stringCalculator_HPP_INCLUDED
#define FILE_stringCalculator_HPP_INCLUDED
#include<string>
#include<sstream>
using std::string;
#include<vector>
using std::vector;

#endif //ifndef File_stringCalculator_HPP_INCLUDED
int stringCalculator(string usrStr)
{
    int sum = 0;
    vector<int> calcVals;
    std::istringstream ss(usrStr);
    for(int i; ss >> i;)
    {
        calcVals.push_back(i);
        if(ss.peek() == ',') 
            ss.ignore();
    }
    for(int i = 0; i < calcVals.size(); ++i)
    {
        sum += calcVals.at(i);
    }
    return sum;
}