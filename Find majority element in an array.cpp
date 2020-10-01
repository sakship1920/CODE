#include<bits/stdc++.h>

using namespace std;

void findmajority(int arr[], int n)
{
	int maxcount =0;
	int index = -1; 
	for(int i=0; i<n; i++)
	{
		int count = 0;
		for(int j=0; j<n; j++)
		{
			if(arr[i] == arr[j])
			count++;
		}
		
		if(count > maxcount)
		{
			maxcount = count;
			index = i;
		}
	}
	if(maxcount> n/2)
		cout << arr[index] << endl;
	
	else
		cout<<"No majority Element" << endl;
}

int main()
{
	int arr[] = {1,2,3,4,5,6};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	findmajority(arr,n);
	return 0;
}
 //By using above basic step we are getting time complexity og o(n^2)
 //So now to getting better time complexicity we will use moore's voting
 
 int findcandidate(int a[] , int size)
 {
 	int maj_index = 0 , count =1;
 	for(int i=1; i<size; i++)
 	{
 		if(a[maj_index] == a[i])
 			count++;
 		else
 			count--;
 		if (count == 0)
 		{
 			maj_index = i;
 			count = 1;
		 }
	 }
	 return a[maj_index];
 }
 
 //Now check if maj_index is occur more that n/2 times
 
 bool ismajority(int a[], int size, int cand)
 {
 	int count = 0;
 	for(int i=0; i<size; i++)
 	
 		if (a[i] == cand)
 			count++;
 		if (count > size/2)
 			return 1;
 		else
 			return 0;
	 
}
	 
//This is the function to print majority element
void printmajority(int a[], int size)
{
	//find candidate for majority
	int cand = findcandidate(a, size);
	//print candidate if it is majority
	if(ismajority(a, size, cand))
		cout << " " << cand << " ";
		
	else
		cout<<"No majority element";
	
}

int main()
{
	int a[] = {3,3,3,1,2};
	int size = (sizeof(a))/sizeof(a[0]);
	
	printmajority(a, size); //function calling
	
	return 0;
}
