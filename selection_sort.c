#include <iostream>
#include <time.h>
using namespace std;

int selection_sort(int a[],int n)
{
  int i,j,index,temp;
  clock_t end;
  for(i=0;i<n-1;i++)
  {
    index=i;
    for(j=i+1;j<n;j++)
    {
      if(a[j]<a[index])
       index=j;
    }
    temp=a[index];
    a[index]=a[i];
    a[i]=temp;
  }
  end=clock();
  cout<<"Result of selection sort is : "<<endl;
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
  return end;
  
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
	end=selection_sort(a,n);
    cout<<endl<<"Time required = "<<(double)(end-start)/CLOCKS_PER_SEC;
	return 0;
}
