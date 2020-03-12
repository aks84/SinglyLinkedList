#include "LinkedList.h"
using namespace std;


LinkedList::LinkedList()
{
	head = NULL;
	tail = NULL;
}

LinkedList::~LinkedList()
{

}


void LinkedList::insertValue() {
	cout << "\n\n";
	int value, length;
	cout << "Enter Linked List Length: ";
	cin >> length;
	cout << "\n";
	for (int i = 0; i < length; i++)
	{
		cout << "Enter Value #"<<i+1<<": ";
		cin >> value;
		Node* temp;
		temp = new Node;
		temp->data = value;

		if (head==NULL)
		{
			head = temp;
			tail = temp;
			temp->next = NULL;
		}
		else
		{
			tail->next = temp;
			tail = tail->next;
		}

	}
	

};
void LinkedList::displayData() {
	Node* temp;
	temp = head;
	cout << "\nYour Node Data Values: \n";
	while (temp != NULL) {
		cout << temp->data << "| -> ";
		temp = temp->next;
	}
	cout << "\n\n";
};