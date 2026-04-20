#include <iostream>
using namespace std ;

// defining the basic structure of the linkedlist as usual
class Node{
public:
	int data;
	Node* next;  // defined the next pointer
	
	Node(int val){
		data = val ;
		next = NULL ; //initialised next to null by default
	}
};


class CircularList{
	Node* head ;
	Node* tail ;
	
public:
	CircularList(){
		head = tail = NULL ;
	}

	void insertAtHead(int val){
		Node* newNode = new Node(val);
		if(head == NULL){
			head = tail = newNode ;
			tail->next = head ;
		}else{
			newNode -> next = head ;
			head = newNode ;
			tail -> next = head ;	
		}
	}

	void insertAtEnd(int val){
		Node* newNode = new Node(val);
		if(head == NULL){
			head = tail = newNode;
			tail -> next = head;
		}else{
			newNode -> next = head ;
			tail -> next = newNode ;
			tail = newNode ;
		}
	}

	void deleteAtHead(){
		// case 1 : empty list
		if(head == NULL) return ;
		// case 2 : single node
		else if(head == tail){
			delete head ; // deletes node
			head = tail = NULL ; // points the pointers to null
		}
		// case 3: multiple nodes
		else{
			Node* temp = head ;
			head = head -> next;
			tail -> next = head ;
			temp -> next = NULL ;
			delete temp;
		}
	}

	void deleteAtTail(){
		if( head == NULL ) return ;
		else if( head == tail ){
			delete head ;
			head = tail = NULL ;
		}else{
			Node* temp = tail ;
			Node* prev = head ;
			while (prev -> next != tail){
				prev = prev->next ;
			}
			
			tail = prev;
			tail -> next = head ;
			
			temp -> next = NULL; 
			delete temp;
		}
		
	}

	void print(){
		if(head == NULL) return ;
		cout << head -> data << " -> ";
        Node* temp = head -> next ;

        while (temp!= head){
            cout << temp -> data << " -> " ;
			temp = temp -> next ;
        }
        cout << temp->data<< "\n";
    }


};
int main(){
	CircularList cl ;
	cl.insertAtHead(1);
	cl.insertAtHead(2);
	cl.insertAtHead(3);
	cl.insertAtEnd(10);
	cl.deleteAtTail();
	cl.print();
	cl.deleteAtTail();
	cl.print();
}