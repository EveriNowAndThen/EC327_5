#include "LinkedList.h"

LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
    size = 0;
}

LinkedList::~LinkedList()
{
    while(size > 0){
        removeFirst();
    }
}

void LinkedList::addFirst(int element)
{
    Node* newNode = new Node(element);
    newNode->next = head;
    head = newNode;
    if(tail == NULL){
        tail = head;
    }
    size++;
}

void LinkedList::addLast(int element)
{
    Node* newNode = new Node(element);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    size++;
}

int LinkedList::getFirst() const 
{
    if(size == 0){
        cout<<"No elements in the list"<<endl;
	   return 0;
    } else {
        return head->element;
    }
}

int LinkedList::getLast() const
{
    if(size == 0){
        cout<<"No elements in the list"<<endl;
       return 0;
    } else {
        return tail->element;
    }
}

int LinkedList::removeFirst() 
{
    if(size == 0){
        cout<<"No elements in the list"<<endl;
	  return 0;
    } 
    else {
        Node* temp = head;
        head = head->next;
        size--;
        if(head == NULL){
            tail = NULL;
        }
        int element = temp->element;
        delete temp;
        return element;
    }
}

int LinkedList::removeLast() 
{
    if(size == 0){
        cout<<"No elements in the list"<<endl;
	  return 0;
    } 
    else if (size == 1){
        Node* temp = head;
        head = tail = NULL;
        size = 0;
        int element = temp->element; 
        delete temp;
        return element;
    } 
    else {
        Node* current = head;
        for(int i = 0; i < size - 2; i++){
            current = current->next;
        }
        Node *temp = tail; 
        tail = current; 
        tail->next = NULL;
        size--;
        int element = temp->element;
        delete temp;
        return element;
    }
}

int LinkedList::getSize(){
    return size;
}