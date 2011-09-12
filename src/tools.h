#ifndef __TOOLS_H__
#define __TOOLS_H__

#include "types.h"

class Tools
{
	public:
		Tools();
		std::string boolToString(bool value);
		int SUB_TYPEToInt(SUB_TYPE st);
		SUB_TYPE IntToSUB_TYPE(int i);
};

#endif // __TOOLS_H__
