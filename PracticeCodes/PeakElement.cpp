#include<iostream>
using namespace std;

int peakFunc(int arr[],int n)
{
	int i;
	if(n==1)
		return 0;
	if(arr[0]>arr[1])
		return 0;
	
	for(i=0;i<n-1;i++)
	{
		if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1]))
			return i;
	}
}

int main()
{
	int arr[] = { 1, 3, 20, 4, 1, 0 };
	int n=sizeof(arr)/sizeof(arr[0]);
	int no=peakFunc(arr,n);
	cout<<"Index of peak element is :"<<no;
}
