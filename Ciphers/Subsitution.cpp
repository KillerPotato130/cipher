#include "Substitution.h"

string Substiution::encode(const string& msg)
{
	int length = 0, y = 0;
	string temp = "";
	string encoded = "";
	char alphabet[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	char blphabet[] = { 'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a' };

	length = msg.length();
	for (int x = 0; x < length; x++) {
		y = 0;
		if (msg[x] == 32) {
			encoded += msg[x]; 
		}
		else if (msg[x] < 123 && msg[x] > 96) {
			while (msg[x] != alphabet[y]) {
				y++;
			}
			if (msg[x] == alphabet[y]) {
				encoded += blphabet[y];
			}
		}
		else if (msg[x] < 91 && msg[x] > 64) {
			temp = msg[x] + 32;
			while (temp[0] != alphabet[y]) {
				y++;
			}
			if (temp[0] == alphabet[y]) {
				temp = blphabet[y] - 32;
				encoded += temp;
			}
		}
		else if ((msg[x] < 65 && msg[x] > 32) || (msg[x] < 127 && msg[x] >122) || (msg[x] < 97 && msg[x] > 90)) {
			encoded += msg[x];
		}

	}

	return encoded;
}


string Substiution::decode(const string& msg) {
	int length = 0, y = 0;
	string temp = ""; 
	string dencoded = "";
	char alphabet[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	char blphabet[] = { 'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a' };

	length = msg.length();
	for (int x = 0; x < length; x++) {
		y = 0;
		if (msg[x] == 32) { 
			dencoded += msg[x];
		}
		else if (msg[x] < 123 && msg[x] > 96) {
			while (msg[x] != blphabet[y]) {
				y++;
			}
			if (msg[x] == blphabet[y]) {
				dencoded += alphabet[y];
			}
		}
		else if (msg[x] < 91 && msg[x] > 64) {
			temp = msg[x] + 32;
			while (temp[0] != blphabet[y]) {
				y++;
			}
			if (temp[0] == blphabet[y]) {
				temp = alphabet[y] - 32;
				dencoded += temp; 
			}
		}
		else if ((msg[x] < 65 && msg[x] > 32) || (msg[x] < 127 && msg[x] >122) || (msg[x] < 97 && msg[x] > 90)) {
			dencoded += msg[x]; 
		}

	}

	return dencoded;
}