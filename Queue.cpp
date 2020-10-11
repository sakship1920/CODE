#include<iostream>
using namespace std;

class Queue
{
	private:
		int front;
		int rear;
		int arr[5];
		
	public:
		Queue()
		{
			front=-1;
			rear=-1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		}
		bool isEmpty()
		{
			if(front==-1 && rear==-1)
				return true;
			else
				return false;
		}
		bool isFull()
		{
			if(rear=4)
				return true;
			else
				return false;
		}
		void enqueue(int val)
		{
		
			if(isFull())
			{
				cout<<"Queue is full"<<endl;
				return;
			}
			else if(isEmpty())
			{
				rear=0;
				front=0;
				arr[rear]=val;
			}
			else
			{
				rear++;
				arr[rear]=val;
			}
			
			
		}
		int dequeue()
		{
			int x;
			if(isEmpty())
			{
				cout<<"Queue is Empty"<<endl;
				return 0;
			}
			else if(front==rear)
			{
				x=arr[front];
				arr[front]=0;
				front=-1;
				rear=-1;
				return x;
			}
			else
			{
				x=arr[front]; //here we have taken front cuz in queue elmenets are always removed front front end
				arr[front]=0;
				front++;
				return x;
			}
			
		}
		void display()
		{
			cout<<"Display function is called:"<<endl;
			for(int i=0;i<5;i++)
			{
				
				cout<<arr[i]<<endl;
				
			}
		}
		int count()
		{
			return(rear-front+1);
		}
		
		
};

int main()
{
	Queue q1;
	int option,value;

	do
	{
		cout<<"\n What operatio do you want to perform?  Enter 0 to exit."<<endl;
		cout<<"****MENU****"<<endl;
		cout<<"1. Enqueue()"<<endl;
		cout<<"2. Dequeue()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. count()"<<endl;
		cout<<"6. display()"<<endl;
		cout<<"7. Clear Screen()"<<endl<<endl;
		
		cin>>option;
		
		switch(option)
		{
			case 0:
				break;
			case 1:
				cout<<"/nEnter an item you want to enqueue"<<endl;
				cin>>value;
				q1.enqueue(value);
				break;
			case 2:
				cout<<"/nDeque function is called:"<<q1.dequeue();
				break;
			case 3:
				if(q1.isEmpty())
					cout<<"Queue is empty"<<endl;
				else
					cout<<"/nQueue is not Empty"<<endl;
				break;
			case 4:
					if(q1.isFull())
						cout<<"Queus is full"<<endl;
					else
						cout<<"Queue is not full"<<endl;
				break;
			case 5:
				cout<<"Count operation /nCount of items in Queue:"<<endl;
				break;
			case 6:
				cout<<"/nDissplay functio is called-"<<endl;
				q1.display();
				break;
			case 7:
				system("cls");
				break;
			default:
				cout<<"Enter proper option number"<<endl;
				break;					
		}
	}while(option!=0);
	return 0;
}
