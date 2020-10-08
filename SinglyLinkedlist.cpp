#include<iostream>

using namespace std;

/*
Here we are doing some very basic operations of linkedlist:
1)Appened node
2)Prepend Node
3)Insert Node
4)delete Node
5)update Node
6)Print all
*/

class Node
{
	public:
	int key;
	int data;
	Node* next;
	
	Node{
	//constructor
	key=0;
	data=0;
	next=NULL;
	}
};

class singlylinkedlist{
	public:
		Node* head;
		Singlylinkedlist()
		{
			head= NULL;
		}
		Singlylinkedlist(Node *n)
		{
			head = n;
			
			
			Node* NodeExists(int k)
			{
				Node* temp= NULL;
				Node* ptr= head;
				while(ptr!=NULL)
				{
					if(ptr->key==k)
					{
						temp = ptr;
					}
					ptr = ptr->next; 
				}
				return temp;
			}
		}
			//1) Appened the node
			void appendnode(Node* n)
			{
				if(NodeExists(n->key)!=NULL)
				{
					cout<<"Node exist"<<n->key<<endl;
				}
				else
				{
					if(head==NULL)
					{
						head=n;
						cout<<"Node appended"<<endl;
					}
					else
					{
						Node* ptr=head;
						while(ptr->next!=NULL)
						{
							ptr=ptr->next;
						}
						ptr->next=n;
						cout<<"Node appended"<<endl;
					}
				}
			}
			
		//2)Prepend node(attactched node at start)
		void prependNode(Node* n)
		{
			if(NodeExist(n->key)!=NULL)
			{
				cout<<"Node Already exist with given key:"<<n->key<<endl;
			}
			else
			{
				n->next=head;
				head=n;
				cout<<"Node prepended"<<endl;
			}
		}
		//3) Insert Node after particular node in list
		
		void insertNode(int k, Node* n)
		{
			Node* ptr = NodeExist(k);
			if(ptr==NULL)
			{
				cout<<"No node Exist"<<endl;
			}
			else
			{
				if(NodeExist(n->key)!= NULL)
				{
					cout<<"Node already exist with key value:"<<n-<key<<"Inert another with different vaue"<<endl;
				}
				
				else
				{
					n->next=ptr->next;
					ptr->next= n;
					cout<<"Node Inserted"<<endl;
				}
			}
		}
		//4)Delete Node by key
		void deleteNodeByKey(int k)
		{
			if(head==NULL)
			{
				cout<<"SinglyLinkedList is Empty"<<endl;
			}
			else
			{
				if(head!=NULL)
				{
					if(head->key==k)
					{
						head=head->next;
						cout<<"Node Unlinked with key value:"<<k<<endl;
					}
					else
					{
						Node* temp= NULL;
						Node* preveptr = head;
						Node* currentptr = head->next;
						while(currentptr!=NULL)
						{
							if(currentptr->key==k)
							{
								temp = currentptr;
								currentptr = NULL;
							}
							else
						    {
						    	prevptr=prevptr->next;
						    	currentptr = currentptr->next;
							}
						}
						if(temp!=NULL)
						{
							prevptr->next=temp->next;
							cout<<"Node unlinked"<<endl;
						}
						else
						{
							cout<<"Ele dosen't exist"<<endl;
						}
					}
				}
			}
		}
		
		//6) Update Node
		void updateNode(int k, int d)
		{
			Node* ptr = NodeExist(k);
			if(ptr!=NULL)
			{
				ptr->data=d;
				cout<<"Node data updated"<<endl;
			}
			else
			{
				Cout<<"Node dosent Exist"<<endl;
			}
		}
		//7) Print entire ll
		void printlist()
		{
			if(head==NULL)
			{
				cout<<"N node in sll";
			}
			else
			{
				cout<<endl<<"singly LL values";
				Node* temp= head;
				while(temp!=NULL)
				{
					cout<<"("<<temp->key<<","<<temp->data<<")-->"<<endl;
				}
			}
		}
};

int main()
{
	
}


