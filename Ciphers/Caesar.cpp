#include "Caesar.h"

string Caesar::encode(const string& msg)
{
	int length = 0;
	string encoded = "";
	encoded = msg; 

	length = msg.length();

	for (int x = 0; x < length; x++) {
		if (encoded[x] == 32) {
			encoded[x] = encoded[x];
		}
		else {
			encoded[x] = encoded[x] - mKey;
		}
	}

	return encoded; 
}

string Caesar::decode(const string& msg)
{
	int length = 0;
	string dencoded = "";
	dencoded = msg;

	length = msg.length();

	for (int x = 0; x < length; x++) {
		if (dencoded[x] == 32) {
			dencoded[x] = dencoded[x];
		}
		else {
			dencoded[x] = dencoded[x] + mKey;
		}
	}

	return dencoded; 
}

void Caesar::SetmKey(const int newmKey)
{
	mKey = newmKey; 
}
