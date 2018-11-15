#include <iostream>
#include <string>
#include "MyString.h"

using namespace std;

int main(){
	char myArr[] = "test String";
	MyString testMy(myArr, 11);
	cout<< (testMy >= testMy)<<endl;
	char newArr[] = "This is a new arr";
	MyString newStr(newArr, 17);
	cout<< (testMy >= newStr)<<endl;
	cout<< (newStr >= testMy);
	
	return 0;
}