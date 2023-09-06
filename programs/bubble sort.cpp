#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {8, 34, 3, 2, 65};
	int n = 5;
	
	//bubble sort
	for(int i = 0; i<n-1; i++)
	{
		for(int j = 0; j<n-i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(int i = 0; i<n; i++)
		cout<<arr[i]<<" ";
		
	//selection sort
	
	return 0;
}
