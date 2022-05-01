#pragma once

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::string;

class Cipher // make Cipher an abstract class; it's not intended to instantiate a general Cipher object
{
public:
	virtual string encode(const string &msg) = 0;
	virtual string decode(const string &msg) = 0;

private:
	
};


