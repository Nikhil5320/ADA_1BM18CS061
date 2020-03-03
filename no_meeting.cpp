#include <iostream>

using namespace std;

int insert_sort(int a[],int n)
{
	int temp,count=1;
	for(int i=2;i<2*n;i=i+2)
	{
	 for(int j=0;j<i;j=j+2)
	 {
	  if(a[i]<a[j])
	  {
	   temp=a[i];
	   a[i]=a[j];
	   a[j]=temp;
	   temp=a[i+1];
	   a[i+1]=a[j+1];
	   a[j+1]=temp;
 	  }
	 }
	}

       cout<<"The meeting "<<a[0] <<"-"<< a[1]<<" is allocated"<<endl;
       for(int i=1;i<(2*n)-2;i=i+2)
       {
	if(a[i]<=a[i+1])
	{
	 cout<<"The meeting "<<a[i+1] <<"-"<< a[i+2]<<" is allocated"<<endl;
         count++;
        }
       }
      cout<<"Therefore total number of meetings possible = "<<count<<endl;

	 
}
	   
 	 

int main()
{
	int a[100],n;
        cout<<"Enter the number of meetings you want to check"<<endl;
	cin>>n;
	cout<<"Enter the starting and ending time of all the meetings"<<endl;
	for(int i=0;i<2*n;i++)
	 cin>>a[i];
	insert_sort(a,n);
	return 0;
}
