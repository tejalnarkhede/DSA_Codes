// C++ program for the union of two arrays using Set
#include <bits/stdc++.h>
using namespace std;
void getUnion(int a[], int n, int b[], int m)
{
	 int i=0,j;
        set<int> s;
        for(i=0;i<n;i++)
            s.insert(a[i]);
        for(j=0;j<m;j++)
            s.insert(b[j]);
        
        cout<<s.size();
    	
}

// Driver Code
int main()
{
	int a[9] = { 1, 2, 5, 6, 2, 3, 5, 7, 3 };
	int b[10] = { 2, 4, 5, 6, 8, 9, 4, 6, 5, 4 };

	getUnion(a, 9, b, 10);
}

// contributed by Anirban Chand

