#include<bits/stdc++.h>
using namespace std;

//return index if it exists otherwise -1
int binarySearch(int arr[], int x, int l, int r)
{
	if(r>=l)
	{
	int mid = (l + r)/2;
	
	if(x == arr[mid])		//base case
		return mid;			
	
	if(x > arr[mid])
	{
		return binarySearch(arr, x, mid+1, r);
	}
	
	if(x < arr[mid])
	{
		return binarySearch(arr, x, l, mid-1);
	}
	}
	
	return -1;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	cout<<binarySearch(arr, 4, 0, 4);
	cout<<"\n";
	cout<<binarySearch(arr, 5, 0, 4);cout<<"\n";
	cout<<binarySearch(arr, 7, 0, 4);cout<<"\n";
	cout<<binarySearch(arr, 1, 0, 4);cout<<"\n";
	return 0;
}
