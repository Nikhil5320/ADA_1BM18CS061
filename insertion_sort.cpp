#include <iostream>
#include <time.h>
using namespace std;

insert_sort(int a[],int n)
{
int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1; 
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}

int main()
{
  clock_t start,end;
	int a[100],n;
        cout<<"Enter the number of elements in array"<<endl;
	cin>>n;
	cout<<"Enter all "<< n <<" elements of array"<<endl;
	for(int i=0;i<n;i++)
	 cin>>a[i];
        start=clock();
	insert_sort(a,n);
        end=clock();
        cout<<"Time required = "<<(double)(end-start)/CLOCKS_PER_SEC<<endl;
	return 0;
}
