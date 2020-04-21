//stringCalculator.hpp
//Ben Talotta
#ifndef FILE_stringCalculator_HPP_INCLUDED
#define FILE_stringCalculator_HPP_INCLUDED
#include<string>
#include<sstream>
using std::string;


#endif //ifndef File_stringCalculator_HPP_INCLUDED
int stringCalculator(string usrStr)
{
    int i = 0;
    std::istringstream(usrStr) >> i;
    return i;
}