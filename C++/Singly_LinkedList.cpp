#include<iostream>

using namespace std;

//sll structure

class Node{
	public:
	int data;
	Node* next;
};

//insertion at end

void insertEnd(Node* head,int data){
	
	Node* temp = new Node();
	Node* curr =(head);
	temp->data = data;
	temp->next = NULL;

	if(curr==NULL){
		(head) = temp;
		return;
	}

	while(curr->next != NULL){
		curr=curr->next;
	}
	curr->next=temp;
	return;
}

//insertion at begining

void insertBegin(Node* &head,int data){

	Node* temp = new Node();
	temp->data = data;


	if(head==NULL){
		head = temp;
		return;
	}

	temp->next = head;
	head = temp;

}

//traversal of list

void traverse(Node* head){
	
	if (head==NULL) cout<<"list is empty";

	while(head!=NULL){
		cout<<head->data<<" -> ";
		head=head->next;
	}
}
int main(int argc, char const *argv[])
{
	Node* slist = new Node();
	insertEnd(slist,2);
	insertBegin(slist,3);
	insertEnd(slist,4);
	insertBegin(slist,3);
	traverse(slist);
	return 0;
}