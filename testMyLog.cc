 ///
 /// @file    testMyLog.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-04-15 11:22:15
 ///

#include "MyLog.h"
 
#include <iostream>
using std::cout;
using std::endl;

int main(void) {
	//MyLog::getInstance()->warn(prefix("warn message"));
	//MyLog::getInstance()->error(prefix("error message"));
	//MyLog::getInstance()->info(prefix("info message"));
	//MyLog::getInstance()->debug(prefix("debug message"));

	LogError("error message");
	LogWarn("warn message");
	LogInfo("ifno message");
	LogDebug("debug message");

	return 0;
}

int test1(void)
{
	cout << __FILE__"hellowrold" << endl;
	cout << __FUNCTION__ << endl; 
	cout << __func__ << endl;
	cout << __LINE__ << endl;
	
	return 0;
}
