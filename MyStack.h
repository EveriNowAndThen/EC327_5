// MyStack h file
#ifndef MYSTACK_H
#define MYSTACK_H

class MyStack : public LinkedList{
	public:
		MyStack();
		bool isEmpty();
		int getSize();
		int pop();
		
		void push(int newItem);
		
		
	private:
		
};
#endif