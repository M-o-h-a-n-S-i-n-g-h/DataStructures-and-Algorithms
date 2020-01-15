#include<iostream>

using namespace std;

class Node
{
public:
	int data;
	Node* next;
};

void printList(Node* head1)
{
	while (head1 != NULL) {
		cout << head1->data << " ";
		head1 = head1->next;
	}
}

int main()
{
	Node* head = NULL;
	Node* first = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	first = new Node();
	second = new Node();
	third = new Node();

	head->data = 50;
	head->next = first;
	first->data = 40;
	first->next = second;
	second->data = 60;
	second->next = NULL;
	third->data =  70;
	third->next	=nullptr;;

	printList(head);


	return 0;
}