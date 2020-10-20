#include<iostream>
using namespace std;

class twostack
{
	int top1;
	int top2;
	int size;
	int* arr;
	
	public:
		twostack(int n)
		{
			size=n;
			arr = new int[n];
			top1= n/2+1;
			top2 =n/2;
		}
		
		void push1(int x)
		{
			if(top1>0)
			{
				top1--;
				arr[top1]=x;
				return3
				; //return
				
			}
			else
			{
				cout<<"/n Stack is Overflow"<<"By element"<<x<<endl;
			}
		}
		void push2(int x)
		{
			if(top2<size-1)
			{
				top2++;
				arr[top2]=x;
			}
			else
			{
				cout<<"Stack is Overflow"<<"By element"<<x<<endl;
			}
		}
		
		int pop1()
		{
			if(top1<=size/2)
			{
				int x=arr[top1];
				top1++;
				return x;
			}
			else
			{
				cout<<"Stack is underflow"<<endl;
			}
		}
		int pop2()
		{
			if(top2>=size/2+1)
			{
				int x = arr[top2];
				top2--;
				return x;
			}
			else
			{
				cout<<"Stack is undeflow"<<endl;
			}
		}
		
};
int main()
{
	twostack t(5);
	t.push1(2);
	t.push2(6);
	t.push1(6);
	t.push1(9);
	t.push2(8);
	cout<<"Poped element from stack1 is:"<<t.pop1()<<endl;
	t.push2(3);
	cout<<"\nPopped element from stack2 is"<<t.pop2()<<endl;
	
	return 0;
	
}
