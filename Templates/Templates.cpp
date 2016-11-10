// Templates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LinkedList.h"
#include <iostream>
#include <string>
using namespace std;




int main()
{
	

	LinkedList<string>* myList = new LinkedList<string>;
	myList->pushFront("a");
	myList->pushFront("b");
	myList->pushFront("c");
	myList->pushFront("b");
	myList->display();

	cout << "first item on the list: " << myList->getFront() << endl;
	myList->popFront();
	myList->display();

	cout << "the next item on the list: " << myList->getFront() << endl;
	myList->popFront();

	delete myList;

	system("pause");

	
}

