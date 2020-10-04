#include<iostream>

using namespace std;
//here we are using very simple method with time complexity of o(n^2)
//function to find element
int getodd(int a[], int n)
{
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			count++;
		 } 
		 if(count%2 !=0)
		 	return a[i];
	}
	return -1;
}

int main()
{
	int a[] = {2,3,1,2,3,1,4,4,4};
	int n = sizeof(a) / sizeof(a[0]);
	
	//Function calling
	cout<<getodd(a,n);
		
}
