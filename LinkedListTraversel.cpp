#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
void printLinkedList(Node* head)
{
	if (head == NULL)
	{
		cout << "NULL";
		return;
	}
	cout << head->data << " -> ";
	printLinkedList(head->next);
}
int main()
{
	Node* head = new Node{ 10,NULL };
	head->next = new Node{ 20,NULL };
	head->next->next = new Node{ 30,NULL };
	head->next->next->next = new Node{ 40,NULL };
	head->next->next->next->next = new Node{ 50,NULL };
	cout << "Linked List using Recursion = ";
	printLinkedList(head);
	cout << endl;
	return 0;
}

