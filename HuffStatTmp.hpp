#ifndef __J2K__LZH__HuffStatTmp_HPP__
#define __J2K__LZH__HuffStatTmp_HPP__

#include "LZHMacro.hpp"

class HuffStatTmpStruct
{
public:
  HUFFINT i;
  HUFFINT n;
};

void shellSort( HuffStatTmpStruct* a, int N );

#endif
