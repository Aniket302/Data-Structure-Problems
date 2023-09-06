#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr)
{
	int low = arr[0][0];
	int high = arr[0][1];

	vector<vector<int>> sol;

	for (int a = 1; a<arr.size(); a++)
	{
		if (high >= arr[a][0])
		{
			high = arr[a][1];
		}
		else
		{
			vector<int> subinterval;
			subinterval.push_back(low);
			subinterval.push_back(high);
			sol.push_back(subinterval);

			low = arr[a][0];
			high = arr[a][1];
		}
		cout<<"\n\nLow: "<<low;
		cout<<"\nHigh: "<<high;
	}
	
	return sol;
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2}, {1, 3}, {1, 6}, {3, 4}, {4, 4}, {4, 5}, {5, 5}, {6, 6}, {6, 6}
    };
    
    vector<vector<int>> arr2 = mergeOverlappingIntervals(arr);

	cout<<"\n\n";

    for (auto x: arr2)
    {
        for (auto y: x)
        {
            cout<<y<<",";
        }
        cout<<"\n";
    }

    return 0;
}