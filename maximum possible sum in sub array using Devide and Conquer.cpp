#include<iostream>

using namespace std;

//utility function to find max of two integers
int max(int a, inr b) { return (a>b)? a:b;}

//utility function to find max of three integers
int max(int a, int b, int c) {return max(max(a,b), c);}

//find max possible sum in arr[] such that arr[m] is part of it
int maxcrossingsum(int a[], int l, int m, int h)
{
	//Include elements on left of mid
	int sum=0;
	int left_sum = INT_MIN;
	for(int i=m; i>= l; i--)
	{
		sum = sum + arr[i];
		if(sum > right_sum)
			right_sum = sum;
	}
}
