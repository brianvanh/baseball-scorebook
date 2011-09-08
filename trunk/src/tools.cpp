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
