#pragma once

#include "Cipher.h"

// Concrete class
class Caesar : private Cipher
{
public:
	string encode(const string& msg);
	string decode(const string& msg);  
	 
	void SetmKey(const int newmKey); 

private:
	int mKey;

};