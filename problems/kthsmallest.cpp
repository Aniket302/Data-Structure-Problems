// { Driver Code Starts
//Initial Template for C

#include<stdio.h>

 // } Driver Code Ends
//User function Template for C

int kthSmallest(int arr[], int l, int r, int k)
    {
        //l legth, k is the value, r is the ending index
        int min = arr[l]; 
        //run k times, make the min value 0 and ignore 0
        k++;
        while(k--)
        {
            int index;
            for(int i = l+1; i<r; i++)
            {
                if(arr[i]<min && arr[i]!=0)
                {    
                    if(k==1) 
                        min = arr[i];
                    index = i;
                }
            }
            arr[index] = 0;
        }
        return min;
    }

// { Driver Code Starts.
 
int main()
{
    int test_case;
    scanf("%d",&test_case);
    while(test_case--)
    {
        int number_of_elements;
        scanf("%d", &number_of_elements);
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            scanf("%d", &a[i]);
            
        int k;
        scanf("%d",&k);
        printf("%d",kthSmallest(a, 0, number_of_elements-1, k));
        printf("\n");
    }
    return 0;
}  // } Driver Code Ends
