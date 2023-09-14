#include <bits/stdc++.h>
using namespace std;

// Returns length of the longest
// contiguous subsequence
int findLongestConseqSubseq(int a[], int n)
{
//    int ans = 0, count = 0;
//
//    // sort the array
//    sort(arr, arr + n);
//
//    vector<int> v;
//    v.push_back(arr[0]);
//
//    //insert repeated elements only once in the vector
//    for (int i = 1; i < n; i++) 
//    {
//        if (arr[i] != arr[i - 1])
//            v.push_back(arr[i]);
//    }
//    // find the maximum length
//    // by traversing the array
//    for (int i = 0; i < v.size(); i++) 
//    {
//        
//        // Check if the current element is equal
//        // to previous element +1
//        if (i > 0 && v[i] == v[i - 1] + 1)
//            count++;
//        // reset the count
//        else
//            count = 1;
//
//        // update the maximum
//        ans = max(ans, count);
//    }
//    return ans;

		int cnt=0,ans=0;
	    vector<int> v;
	    sort(a,a+n);
	    v.push_back(a[0]);
	    for(int i=0;i<n;i++)
	    {
	    	if(a[i]!=a[i-1])
	    		v.push_back(a[i]);
		}
		for(int i=0;i<v.size();i++)					
		{
			if(i>0 && v[i]==v[i-1]+1)
				cnt++;
			
			
		}
		return cnt;

}

// Driver code
int main()
{
    int arr[] = { 1,9,3,10,4,5,6,6,20,2 };
    int n = sizeof arr / sizeof arr[0];
    cout << "Length of the Longest contiguous subsequence "
            "is "
         << findLongestConseqSubseq(arr, n);
         return 0;
}
