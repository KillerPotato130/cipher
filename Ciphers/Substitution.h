#pragma once

#include "Cipher.h"

// Concrete class
class Substiution : private Cipher
{
public:
	string encode(const string& msg);
	string decode(const string& msg);

	

};

