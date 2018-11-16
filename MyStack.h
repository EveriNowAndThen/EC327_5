// MyStack h file
#ifndef MYSTACK_H
#define MYSTACK_H
#include "LinkedList.h"
#include <iostream>
#include <bits/stdc++.h>

class MyStack : protected LinkedList {
	public:
		MyStack();
		bool isEmpty();
		int getSize();
		int pop();
		void push(int newItem);
		
		
	private:
		// nothing, probably
};
#endif