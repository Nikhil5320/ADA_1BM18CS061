#include<iostream>
using namespace std;

int count=0;

void tow_h(int n,char S,char A,char D)
{
 if (n == 1)  
    {  
        cout << "Move disk 1 from  " << S<<  
                            " to " << D<<endl;  
        return;  
    }  
    tow_h(n - 1, S, A, D);  
    cout << "Move disk " << n << " from " << S << 
                                " to " << D<< endl;  
    tow_h(n - 1, A, D, S);  
}
 
int main()
{
 int n;
 cout<<"Enter the number of plates in tower"<<endl;
 cin>>n;
 tow_h(n,'A','C','B');
 cout<<count;
}


 
 
 
