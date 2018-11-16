// testCode.cpp
#include "MyStack.h"
#include "LinkedList.h"

using namespace std;

int main(){
	MyStack newstack;
	newstack.push(8);
	newstack.push(3);
	newstack.push(52);
	while (!newstack.IsEmpty( )){
		cout << “Stack item ” << newstack.getSize() << “is”<< newstack.pop() << endl;
	}
	return 0;
}
		