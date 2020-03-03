#include <iostream>
#include <time.h>
using namespace std;

int insert_sort(int a[],int n)
{
	int temp;
	for(int i=1;i<n;i++)
	{
	 for(int j=0;j<i;j++)
	 {
	  if(a[i]<a[j])
	  {#include <iostream>
#include <time.h>
using namespace std;

int insert_sort(int a[],int n)
{
	int temp;
	for(int i=1;i<n;i++)
	{
	 for(int j=0;j<i;j++)
	 {
	  if(a[i]<a[j])
	  {
	   temp=a[i];
	   a[i]=a[j];
	   a[j]=temp;
 	  }
	 }
	}
	cout<<"The sorted array by insertion sort is : ";
        for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
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
}#include <iostream>
#include <time.h>
using namespace std;

int insert_sort(int a[],int n)
{
	int temp;
	for(int i=1;i<n;i++)
	{
	 for(int j=0;j<i;j++)
	 {
	  if(a[i]<a[j])
	  {
	   temp=a[i];
	   a[i]=a[j];
	   a[j]=temp;
 	  }
	 }
	}
	cout<<"The sorted array by insertion sort is : ";
        for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
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
	   temp=a[i];
	   a[i]=a[j];
	   a[j]=temp;
 	  }
	 }
	}
	cout<<"The sorted array by insertion sort is : ";
        for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
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
