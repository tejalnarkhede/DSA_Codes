#include<iostream>
using namespace std;

void getMinMax(int arr[],int n)
{
    int i=0,max,min;
    if(n==1)
    {
    	min=arr[0];
        max=arr[0];
	}
        
    if(arr[0]>arr[1])
    {
    	min=arr[1];
    	max=arr[0];
	}
	else
	{
		min=arr[0];
		max=arr[1];
	}
    
	for(i=2;i<n-1;i++)
    {
    	if(min>arr[i])
    		min=arr[i];
    	if(max<arr[i])
    		max=arr[i];
        
    }
    cout<<"max is:"<<max<<endl;
    cout<<"min is:"<<min;
}
int main()
{
    int arr[] = {12,56,90,34,45};
    int n=sizeof(arr)/sizeof(arr[0]);
	getMinMax(arr,n);
    return 0;
}
