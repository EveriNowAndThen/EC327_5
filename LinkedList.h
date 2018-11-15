#ifndef LINKEDLIST_H
#define LINKEDLIST_H
// Code for linkedList Class and node Class

#include <iostream> 
using namespace std;

class LinkedList
{
    public:
        LinkedList();
        ~LinkedList();
        void addFirst(int element);
        void addLast(int element);
        int getFirst() const;
        int getLast() const;
        int removeFirst();
        int removeLast();
        int getSize();
        
    protected:
        class Node; 
        Node* head;
        Node* tail;
        int size;

    class Node
    {
        public:
            int element;
            Node* next;
            Node(){ //no-arg constructor
                next = NULL;
            }
            Node(int element){ //constructor
                this->element = element;
                next = NULL;
            }
    };
};

#endif