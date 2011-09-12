#include <string>
#include <QDebug>
#include "tools.h"


using namespace std;

Tools::Tools()
{
	qDebug() << "Tools Established";
}

std::string Tools::boolToString(bool value)
{
	if(value)
		return "true";
	else
		return "false";	
}

int Tools::SUB_TYPEToInt(SUB_TYPE st)
{
	if (st == SOFTBALL) {
		return 0;
	}else if (st == HYBRID) {
		return 1;
	}else if( st == BASEBALL){
		return 2;
	}else{
		return 3;
	}
}

SUB_TYPE Tools::IntToSUB_TYPE(int i)
{
	if ( i == 0 ){
		return SOFTBALL;
	}else if( i == 1 ){
		return HYBRID;
	}else if( i == 2){
		return BASEBALL;
	}else{
		return OTHER;
	}
}
