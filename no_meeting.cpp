#include <iostream>

using namespace std;

int no_meetings(int a[],int n)
{
	int temp,count=1,j=n+1;
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
	for(int i=0;i<2*n;i++)
	 cout<<a[i]<<" ";
    cout<<endl;
       cout<<"The meeting "<<a[0] <<"-"<< a[1]<<" is allocated"<<endl;
       for(int i=1;i<(2*n)-2;i=j+1)
       {
        for(j=i+1;j<(2*n)-1;j=j+2)
        {
            if(a[i]<=a[j])
            {
                cout<<"The meeting "<<a[j] <<"-"<< a[j+1]<<" is allocated"<<endl;
                count++;
                break;
            }
        }
       }
      cout<<"Therefore total number of meetings possible = "<<count<<endl;
      return 0;

}



int main()
{
	int a[100],n;
        cout<<"Enter the number of meetings you want to check"<<endl;
	cin>>n;
	cout<<"Enter the starting and ending time of all the meetings"<<endl;
	for(int i=0;i<2*n;i++)
	 cin>>a[i];
	no_meetings(a,n);
	return 0;
}
