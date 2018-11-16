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
    if(tail == NULL){ // Condition to check if no nodes, tail will then be null, otherwise never
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
	  return 0; // if we have no elements, we can't remove one
    } 
    else if (size == 1){ // If there is only one element, we are removing it, but accessing it is easy, 
						// since it is both head and tail
        Node* temp = head; // Temporary node is head node
        head = tail = NULL; // setting empty to Null
        size = 0; 				//Now an empty list
        int element = temp->element;  //Taking the value of temp and saving it to return what was taken
        delete temp;				// delete temp
        return element;				// return element
    } 
    else {
        Node* current = head; // Okay - Making a new node with same info as head node
        for(int i = 0; i < size - 2; i++){ // -2 becuse last one gets deleted, and one before it becomes tail
            current = current->next; // We are now iterating through the linked list. Why?
									 // Every node has a next pointer, telling us where the next node in the list lives
									 // Here, we are shifting the nodes down, effectively
        }
        Node *temp = tail; // Making a temporary to save tail
        tail = current; 	// 
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