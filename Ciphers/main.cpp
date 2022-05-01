// This example is intended to provide a quick
// review of inheritance and polymorphism. It works
// with ciphers.

// NOTE: this is another bonus opportunity!!! Complete the code by creating two
//       derived classes. One for Caesar Cipher and 
//       one for a Substitution Cipher. You need to also run tests to illustrate
//       that the encode and decode algorithms work.

// History: 4/11/22 - Discussed Cipher and Caesar Cipher setup.
//                  Casesar Cipher is a specific kind of cipher,
//                  but has common properties to other ciphers.
//                  Inheritance and abstract classes, plus polymorphism
//                  could be useful here!!!

#include "Caesar.h"
#include "Test.h"

int main(void)
{
	Test tests; 
	

	tests.runTests();
	

	return 0;
}