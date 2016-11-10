#include "stdafx.h"
#include "Node.h"


template <class T> Node::Node(T d)
{
	data = d;
}

template <class T> int Node::getData()
{
	return data;
}

template <class T> void Node::setNext(Node<T>* tmp)
{
	next = tmp;
}

template <class T> Node* Node::getNext()
{
	return next;
}