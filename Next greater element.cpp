//****** SIMPLE METHOD ******

/*#include<iostream>
using namespace std;

void NGE(int arr[],int n)
{
	int next,i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			next=-1;
			if(arr[i]<arr[j])
			{
				next = arr[j];
				break;
			}
		}
		cout<<arr[i]<<"--"<<next<<endl;
	}
}

int main()
{
	int arr[]={11,45,65,21};
	int n =sizeof(arr)/sizeof(arr[0]);
	NGE(arr,n);
	return 0;
}*/


//******** USING STACK ********


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void NGE(int arr[], int n)
{
	stack<int> s;
	s.push(arr[0]);
	
	for(int i=1;i<n;i++)
	{
		if(s.empty())
		{
			s.push(arr[i]);
			continue;
		}
		
		while (s.empty()==false && s.top()<arr[i]){
			cout<<s.top() << "-->"<<arr[i]<<endl;
			s.pop();
			
		}
		s.push(arr[i]);
		
	}
	
	while (s.empty()==false)
	{
		cout<<s.top()<<"-->"<<-1<<endl;
		s.pop();
	}
}
int main()
{
	int arr[]= {11,13,21,3};
	int n = sizeof(arr) / sizeof(arr[0]);
	NGE(arr,n);
	return 0;
}

