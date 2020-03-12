#include <iostream>

class Node {
public:
	int data;
	Node* next;
};

class LinkedList
{
public:
	Node* head, *tail;
	LinkedList();
	~LinkedList();
	void insertValue();
	void displayData();

};



