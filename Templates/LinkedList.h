#include "stdafx.h"
#include <iostream>
#include"Node.h"

using namespace std;

template <class T> class LinkedList
{

private:
	Node<T>* head;
public:

 LinkedList::LinkedList()
{
	head = NULL;
}


LinkedList::~LinkedList()
{
	Node<T>* prior; 
	while (head)	
	{
		prior = head; 
		head = head->getNext(); 
		delete prior; 
	}
}

 void LinkedList::pushFront(T d)
{
	Node<T>* tmp = new Node<T>(d); 
	tmp->setNext(head); 
	head = tmp; 
}


void LinkedList::popFront()
{
	Node<T>* tmp = head; 
	if (head) 
	{
		head = head->getNext();
		delete tmp;
	}
}


T LinkedList::getFront()
{
	if (head) 
	{
		return head->getData();
	}
	exit(0);

}

void LinkedList::display()
{
	Node<T>* search;
	search = head; 
	while (search) 
	{
		cout << search->getData() << endl;
		search = search->getNext();
	}
	cout << endl;
}
};
