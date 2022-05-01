#include "Test.h"

void Test::runTests()
{
	testEncode(); 

	testDecode(); 



}

void Test::testEncode()
{
	string newMSG = "I Hope You Had A Great Semester";
	string subNewMSG = "Have An Amazing Summer!";
	string ceaserEncoded = "";
	string subEncoded = "";

	Caesar cipher; 
	Substiution sub;
	cipher.SetmKey(5);
	ceaserEncoded = cipher.encode(newMSG);
	cout << "Message to be encoded: You can't see this message yet!"  << endl;
	cout << "Ceaser Encoded message: " << ceaserEncoded << endl;

	subEncoded = sub.encode(subNewMSG); 
	cout << "Substitution Encoded message: " << subEncoded << endl << endl << endl;  

}

void Test::testDecode()


{
	string newMSG = "D Cjk` Tjp C\\_ < Bm`\\o N`h`no`m";
	string subNewMSG = "Szev Zm Znzarmt Hfnnvi!";
	string ceaserDecoded = "";
	string subDecoded = "";

	Caesar cipher;
	Substiution sub;
	cipher.SetmKey(5);
	ceaserDecoded = cipher.decode(newMSG);
	cout << "Message to be Ceaser decoded: " << newMSG << endl; 
	cout << "Ceaser Decoded message: " << ceaserDecoded << endl << endl;

	subDecoded = sub.decode(subNewMSG);
	cout << "Message to be Substitution decoded: " << subNewMSG << endl;
	cout << "Substitution Decoded message: " << subDecoded << endl << endl << endl;
}
