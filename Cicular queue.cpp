#include<iostream>
using namespace std;

class cqueue
{
	private:
		int front;
		int rear;
		int itemcount;
		int arr[5];
	
	public:
		
		cqueue()
		{
			itemcount=0;
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
			if((rear+1)%5==front)
				return true;
			else
				return false;
		}
		
		void enqueue(int x)
		{
			if(isFull())
			{
				cout<<"Queue is overflow"<<endl;
				return;
			}
			else if(isEmpty())
			{
				rear=0;
				front=0;
				arr[rear]=x;			
			}
			else
			{
				rear=(rear+1)%5;
				arr[rear]=x;
			}
			itemcount++;
		}
		int dequeue()
		{
			int y;
			if(isEmpty())
			{
				cout<<"/n Queue is Underflow"<<endl;
				return 0;
			}
			else if(front==rear)
			{
				y=arr[front];
				arr[front]=0;
				front=-1;
				rear=-1;
				itemcount--;
				return y;
			}
			else
			{
				y=arr[front];
				arr[front]=0;
				front=(front+1)%5;
				itemcount--;
				return y;
			}
		}
		
		int count()
		{
			return(itemcount);
		}
		void display()
		{
			cout<<"Display function is called:"<<endl;
			for(int i=0;i<5;i++)
			{
				
				cout<<arr[i]<<endl;
				
			}
		}
		
		
};

int main()
{
	cqueue q1;
	int option,x;

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
				cin>>x;
				q1.enqueue(x);
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
