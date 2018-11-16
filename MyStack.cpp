// MyStack.cpp
#include "MyStack.h"
#include "LinkedList.h"
#include <iostream>
 
 MyStack::MyStack(){
	 LinkedList();
 }
 
 void MyStack::push(int element){
	 addFirst(element);
 }
 
 bool MyStack::isEmpty(){
	 if(head == NULL)
		 return true;
	 else
		 return false;
 }
 
 int MyStack::getSize(){
	 return size;
 }
 
 int MyStack::pop(){
	 return removeLast();
 }
 