#include <bits/stdc++.h>

using namespace std;

/*int getcount(int arr[], int n, int sum)
{
	int count=0;
	
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			if (arr[i]+arr[j] == sum)
				count++;
	return count;
}*/


//here we can say that using this method we are getting time complexicity of o(n^2)
//but now for getting less time complexity we will use unorderd_map
int getcount(int arr[], int n, int sum)
{
	unordered_map<int, int> m;
	int twice_count; 
	//we will store counts of all elements in map
	for(int i=0; i<n; i++)
	
		m[arr[i]]++;
    twice_count = 0;
	//itereate through each element and increament count
	for(int i=0; i<n; i++)
	{
		twice_count += m[sum-arr[i]];
		//as we are iterating twice so if there is arr[i],arr[i],satisfies condition we need to decrease count
		if(sum-arr[i]==arr[i])
			twice_count--;
	}
	//now return half of twice count
	return twice_count/2;		
	
}

int main()
{
	int arr[] = {2,2,3,1,5,-1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 4;
	cout << "Count of pairs is "<< getcount(arr, n, sum);
	return 0;
}
