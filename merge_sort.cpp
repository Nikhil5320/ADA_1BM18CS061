#include<iostream>
#include<time.h>
using namespace  std;

void combine(int a[],int low,int mid,int high)
{
   int i=low,k=low,j=mid+1,c[20];
   while(i<=mid && j<=high)
   {
       if(a[i]<a[j])
       {
           c[k++]=a[i++];
       }
       else
       {
           c[k++]=a[j++];
       }
   }
   if(i>mid)
   {
       while(j<=high)
       {
           c[k++]=a[j++];
       }
   }
   if(j>high)
   {
       while(i<=mid)
       {
           c[k++]=a[i++];
       }
   }
   for(int i=low;i<=high;i++)
    a[i]=c[i];
   

}

void split(int a[],int low,int high)
{
    if(low<high)
    {
       int mid=(low+high)/2;
        split(a,low,mid);
        split(a,mid+1,high);
        combine(a,low,mid,high);
    }
   
}

int main() 
{ 
   clock_t start,end;
   int a[20],n,i;
   cout<<"Enter size\n";
   cin>>n;
   cout<<"Enter array elements\n";
   for(i=0;i<n;i++)
    cin>>a[i];
   start=clock();
   split(a,0,n-1); 
   end=clock();
   cout<<"\nSorted array is \n"; 
   for(i=0;i<n;i++)
     cout<<a[i]<<" ";
   cout<<"\nTime taken ="<<(double)(end-start)/CLOCKS_PER_SEC;
    return 0; 
}

