// C++ program to print all elements that
// appear more than once.
#include <iostream>
using namespace std;

// function to find repeating elements
void printRepeating(int a[], int n)
{
    

	 int cnt,i=0,j=0,k=0,temp,b[10];
//        for(i=0;i<n;i++)
//        {
//            cnt=0;
//            temp=a[i];
//            for(j=0;j<n;j++)
//            {
//                
//                if(temp==a[j])
//                {
//                    cnt++;
//                    if(cnt>1 && b[k]!=temp) 
//                    b[k++]=temp;     
//                }
//            }
//            cout<<b[i]<<endl;
//        }
	for(i=0;i<n;i++)
        {
        
            for(j=i+1;j<n;j++)
            {
                
                if(a[i]==a[j])
                {
                  cout<<a[i];
                  break;
                }
            }
        }
        		
}

// Driver code
int main()
{
    int arr[] = { 1, 6, 3, 1, 6, 6 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "The repeating elements are: \n";
     // Function call
    printRepeating(arr, arr_size);
    return 0;
}
