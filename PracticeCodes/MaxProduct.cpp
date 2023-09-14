//#include<climits>
//#include <bits/stdc++.h>
//using namespace std;
//
//int maxSubArraySum(int a[], int n)
//{
//    int max_so_far = 0, max_ending_here = 1,temp=0;
//
//    for (int i = 0; i < n; i++)
//    {
//        max_ending_here *= temp + a[i];
//        if (max_so_far < max_ending_here)
//            max_so_far = max_ending_here;
//		
//        
//    }
//    return max_so_far;
//		
//
//		  
//	  
//
//}
//
///*Driver program to test maxSubArraySum*/
//int main()
//{
//    int a[] = {2, 3, 4, 5, -1, 0};
//    int n = sizeof(a)/sizeof(a[0]);
//    int max_sum = maxSubArraySum(a, n);
//    cout << "Maximum contiguous Product is " << max_sum;
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;

// Function to find maximum product subarray
int maxProduct(int* arr, int n)
{
    // Variables to store maximum and minimum
    // product till ith index.
    int minVal = arr[0];
    int maxVal = arr[0];

    int maxProduct = arr[0];

    for (int i = 1; i < n; i++) {

        // When multiplied by -ve number,
        // maxVal becomes minVal
        // and minVal becomes maxVal.
        if (arr[i] < 0)
             swap(maxVal, minVal);

        // maxVal and minVal stores the
        // product of subarray ending at arr[i].
        maxVal = max(arr[i], maxVal* arr[i]);
        minVal = min(arr[i], minVal * arr[i]);
	
        // Max Product of array.
        maxProduct = max(maxProduct, maxVal);
        
    }

    // Return maximum product found in array.
    return maxProduct;
}

// Driver Code
int main()
{
    int arr[] = { 6, -3, -10, 0, 2};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Subarray product is "
         << maxProduct(arr, n) << endl;

    return 0;
}
