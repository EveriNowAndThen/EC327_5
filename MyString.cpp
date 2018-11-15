// MyString cpp for HW5
#include <iostream>
#include <string>
#include"MyString.h"

using namespace std;

MyString::MyString(){
	theString = "";
}
MyString::MyString(char chars[], int size){
	theString = string(chars, size);
}

void MyString::append(int n, char ch){
	char *myChar = &ch;
	for(int i = 0; i < n; i++){
			theString.append(&ch);
	}
}
// Assuming the solution is as the question asked
void MyString::assign(MyString s, int n){ 
	string tempString = s.theString.substr(0,n);
	for(int i = 0; i < n; i++){
		theString[i] = tempString[i];
	}
}
/* If it was meant to "front append" the string, we could do this
void MyString::assign(MyString s, int n){
		string tempString = s.theString.substr(0,n);
		string frontSpace;
		frontSpace.append(n, ' ');
		theString.append(frontSpace); // Now we have a buffer to replace instead of our precious MyString string
		for(int i = 0; i < n; i++){
		theString[i] = tempString[i];
		}
} I didn't test it, but it looks good to me. /shrug */

int MyString::partCompare(const MyString& s, int n){
	string origionalStr = theString.substr(0,n);
	string incStr = s.theString.substr(0,n);
	return origionalStr.compare(incStr);
}

MyString MyString::commonPrefix(const MyString &s){
	string incString = (s).theString;
	int i = i;
	MyString comPref;
	while(1){
		if(incString.substr(0,i) == theString.substr(0,i)){
			comPref.theString = incString.substr(0,i);
		}
		else
			break;
		i++;
	}
	return comPref;
}

char MyString::operator [](int i){
			return theString[i];
}

void MyString::operator + (const MyString &s){
	theString.append(s.theString);
}

ostream& operator << (ostream& out, const MyString &inString){
	out << inString.theString<< endl;
	return out;
}

istream& operator >> (istream& in, MyString &inString){ // Whoops. Just assumed I needed this one...
	getline(in, inString.theString);
	return in;
	
}

bool operator >= (MyString& first, MyString& second){
	int qualInt;
	if(first == second)
		return true;
	int firstLen = first.theString.size();
	int secondLen = second.theString.size();
	if(firstLen > secondLen)
		qualInt = first.partCompare(second, secondLen);
	else
		qualInt = first.partCompare(second, firstLen);
	if (qualInt > 0)
		return true;
	else
		return false;
	
}

bool operator == (MyString& first, MyString& second){
	int firstLen = first.theString.size();
	int secondLen = second.theString.size();
	if(firstLen != secondLen)
		return false;
	int myComp = first.partCompare(second, firstLen);
	if(myComp != 0)
		return false;
	else
		return true;
}


//Comment this out for submission
string MyString::getStr(){
	return theString;
}