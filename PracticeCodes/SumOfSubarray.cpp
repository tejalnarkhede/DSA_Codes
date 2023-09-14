/* A simple program to print subarray
with sum as given sum */
#include <bits/stdc++.h>
using namespace std;

/* Returns true if the there is a subarray
of arr[] with sum equal to 'sum' otherwise
returns false. Also, prints the result */
int subArraySum(int a[], int n, int s)
{
 int i,j,curr_sum;
        for(i=0;i<n;i++)
        {    
            curr_sum=a[i];
            for(j=i+1;j<n;j++)
            {    
                if(curr_sum==s)
                {
                    cout<<"The sum of elemenets from index "<<i+1<<" to "<<j<<" is: "<<s<<endl;
                    break;
                }
                if(curr_sum>s)
                    break;
                    
                curr_sum=curr_sum+a[j];
            }
        }
}

// Driver Code
int main()
{
	int arr[] = { 1,5,7,1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 6;
	subArraySum(arr, n, sum);
	return 0;
}

// This code is contributed
// by rathbhupendra

