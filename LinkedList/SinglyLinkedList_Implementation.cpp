#include<bits/stdc++.h>
using namespace std;

class Node{

public:
	int data;
	Node *next;
	Node(int val){
		this->data=val;
		this->next=NULL;
	}
};

void printList(Node* head);
void insertAtBeg(Node* &head, int val);
void insertAtEnd(Node* &head, int val);
void insertAtIndex(Node* &head, int val, int pos);
void deleteNodeWithData(Node* &head, int data);
void deleteNodeAtGivenPos(Node* &head, int data);

int main(){
	Node *head=NULL;
    int n;
    cout<<"Enter n elements to add at beginning: ";
    cin>>n;
    for(int i=0;i<n;i++){
    	int ele;
    	cin>>ele;
    	insertAtBeg(head,ele);
    }
    cout<<endl;
    printList(head);
    cout<<endl;
    cout<<"Inserting 10 at End of LinkedList: "<<endl;
    insertAtEnd(head,10);
    printList(head);
    cout<<endl;
    cout<<"Inserting 8 at 5th position of LinkedList: "<<endl;
    insertAtIndex(head,8,5);
    printList(head);
    cout<<endl;
    deleteNodeWithData(head,5);
    printList(head);
    deleteNodeAtGivenPos(head,4);
    cout<<endl;
    printList(head);
    return 0;

}
void printList(Node *head){
	  Node *ptr=head;
	  while(ptr!=NULL){
	  	cout<<ptr->data<<"->";
	  	ptr=ptr->next;
	  }
	  cout<<"NULL";
}

void insertAtBeg(Node* &head,int val){
	 Node *temp=new Node(val);
	 if(head==NULL){
            head=temp;
	 }
	 else{
	 	temp->next=head;
	 	head=temp;
	 }
}

void insertAtEnd(Node* &head,int val){
	Node *temp=new Node(val);
	if(head==NULL)
		head=temp;
	else{
		Node *ptr=head;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}

void insertAtIndex(Node* &head, int val, int pos){
	Node *temp=new Node(val);
	if(head==NULL)
		head=temp;
	else{
	    if(pos==0){
             temp->next=head;
             head=temp;
	    }
	    else{
	      int i=0;
	      Node*ptr=head;
	      while(ptr!=NULL && i!=pos-1){
	    	ptr=ptr->next;
	    	i++;
	      }
	      if(ptr!=NULL){
	        temp->next=ptr->next;
	        ptr->next=temp;
	      }
	      else{
              cout<<"Position exceeds LinkedList Length"<<endl;
	      }
	    }
	}
}

void deleteNodeWithData(Node* &head,int val){
	 if(head==NULL){
	 	cout<<"\nNo element to delete"<<endl;
	 }
	 else{
	 	if(head->data==val){
	 		head=head->next;
	 	}
	 	else{
	 	 Node *curr=head;
	 	 Node *prev=NULL;
	 	 while(curr!=NULL){
	 		if(curr->data==val){
                   prev->next=curr->next;
                   break;
	 		}
	 		prev=curr;
            curr=curr->next;
	 	 }
         if(curr==NULL){
            cout<<"Element with value "<<val<<" not found"<<endl;
          }
	    }
	  }
}

void deleteNodeAtGivenPos(Node* &head, int pos){
	if(head==NULL){
		cout<<"No Element to delete"<<endl;
	}
	else{
		int i=0;
		if(pos==0){
			head=head->next;
		}
		else{
			Node *ptr=head;
			while(ptr!=NULL && i!=pos-1){
				i++;
				ptr=ptr->next;
			}
			if(ptr==NULL)
				cout<<"\nNo Element to Delete at this position"<<endl;
			else if(ptr->next==NULL)
				cout<<"\nNo Element to Delete at this position"<<endl;
			else
				ptr->next=ptr->next->next;
		}
	}
}