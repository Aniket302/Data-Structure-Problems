#include<bits/stdc++.h>
using namespace std;

// Find the next greater element for every element in an array
void findNextGreaterElements(int input[], int n)
{
    int x = 0;
 	int y = 0;
	// do for each element
    for (int i = 0; i < n; i++)
    {
        // keep track of the next greater element for element `input[i]`
        int next = -1;
 		
        // process elements on the right of element `input[i]`
        for (int j = i + 1; j < n; j++)
        {
            // break the inner loop at the first larger element on the
            // right of element `input[i]`
            if (input[j] > input[i])
            {
                next = input[j];
                x = i;
                y = j;
                break;
            }
        }
 		cout<<" ";
        cout<<y-x<<" ";
        
    }
}
 
int main(void)
{
    int input[] = { 8, 5, 9, 4, 6, 7 };
    int n = sizeof(input) / sizeof(input[0]);
 
    findNextGreaterElements(input, n);
 
    return 0;
}
