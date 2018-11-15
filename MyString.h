// Homework for EC327
#ifndef MYSTRING_H
#define MYSTRING_H
#include <string>
#include <iostream>

using namespace std;
class MyString{
	public:
		MyString();
		// Makes a MyString with "" string value
		
		MyString(char chars[], int size);
		// Makes MyString with string value euql to the first (size) charactors of chars[]
		
		void append(int n, char ch);
		// appends ch n times to MyString 
		
		void assign(MyString s, int n);
		// Assigns first n char of s.theString to MyString 
		
		int partCompare(const MyString& s, int n);
		// Compares two parts of MyStrings, returns 0, >0, <0 depending on value difference
		
		MyString commonPrefix(const MyString &s);
		// Finds common prefix of two MyString objects, returning a new MyString
		
		string getStr(); // Comment out for submission
		// For test purpose
		
		char operator [](int i);
		// Does same thing as string oporator, pulls the string index i from theString of MyString obj and returns char
	
		void operator + (const MyString &s);
		// Appends second MyString theString to first.

		friend ostream& operator << (ostream& out,const MyString &inString);
		// prints theString of inString
		
		friend istream& operator >> (istream& in, MyString &inString);
		// allows user to input theString datafield for MyString obj
		
		friend bool operator >=(MyString& first, MyString& second);
		// Tells you if the strings are greater than or equal? 
		
		friend bool operator == (MyString& first,MyString& second);
		// Tells you whether MysTring first is equal to second. true is yes, false is no
	
	private:
		string theString;

};

#endif