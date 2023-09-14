/* A simple program to print subarray
with sum as given sum */
#include <bits/stdc++.h>
using namespace std;

/* Returns true if the there is a subarray
of arr[] with sum equal to 'sum' otherwise
returns false. Also, prints the result */
int subArraySum(int a[], int n, int s)
{
 int i,j,cnt;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            { 	
				 if(a[i]+a[j]==s)
				 	cnt++;
			}
		}	
        return cnt;
        
}

// Driver Code
int main()
{
	int arr[] = { 10,5,2,2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 7;
	int no=subArraySum(arr, n, sum);
	cout<<no;
}

// This code is contributed
// by rathbhupendra

