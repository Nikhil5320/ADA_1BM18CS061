#include<iostream>
using namespace std;

int count=0;

void tow_h(int n,char S,char A,char D)
{
 if(n>0)
 {
  tow_h(n-1,S,D,A);
  cout<<"Disc moveds from "<<S<<" to "<<D<<endl;
  tow_h(n-1,D,A,S);
  count++;
 }
}
 
int main()
{
 int n;
 cout<<"Enter the number of plates in tower"<<endl;
 cin>>n;
 tow_h(n,'A','C','B');
 cout<<count;
}


 
 
 
