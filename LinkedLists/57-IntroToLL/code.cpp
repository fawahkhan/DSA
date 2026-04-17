#include <iostream>
using namespace std ;

// first we will make a blueprint of a node.
class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data = val;
            next = NULL;
        }
};

// now we will be creating our linkedlist under list class

class List{
    Node* head;
    Node* tail;

    public:
        List(){
            head = tail = NULL;  //created an empty LL for now
        }

        void push_front(int val){ //0(1)
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                return;
            }else{
                newNode->next = head;  //pointer ko point krdiya towards head to establish a connection first
                head = newNode; // changed head to newNode
            }

        }

        void push_back(int val){ //0(1)
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
            }else{
                tail-> next = newNode;
                tail = newNode;
            }
            
        }

        void pop_front(){ // O(1)
            if(head == NULL){
                cout<< "list is empty" ;
                return;
            }else{
                Node* temp = head;
                head = head-> next ;
                temp-> next = NULL;

                delete temp;
            }
        }

        void pop_back(){ // O(n)
            if(head == NULL){
                return;
            }else{
                Node* temp = head;
                while(temp->next != tail){
                    temp = temp->next;
                }
                temp -> next = NULL;
                delete tail ; 
                tail = temp;
            }
        }

        void insert(int val, int pos){ // O(n)
            if(pos<0){
                cout<< "invalid pos";
                return;
            }
            if(pos == 0){
                push_front(val);
                return;
            }
            Node* temp = head;
            for ( int i = 0 ; i < pos ; i++ ){
                if(temp == NULL){
                    cout << "Invalid pos";
                    return;
                }
                temp = temp->next;
                
                Node* newNode = new Node(val);
                newNode -> next = temp -> next;
                temp-> next = newNode;
            }
        }
        
        void printLL(){ // O(n)
            Node* temp = head;
            while(temp!=NULL){
                cout<< temp->data << "->";
                temp = temp-> next ;
            }
            cout<< "NULL"<< endl;
        }
        
        int search(int key){
            Node* temp = head ;
            int idx = 0 ;

            while(temp != NULL){
                if(temp->data == key){
                    return idx;
                }
                temp = temp-> next ;
                idx++ ;
            }
            return -1;
        }
};