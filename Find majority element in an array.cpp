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
