#include<iostream>
using namespace std;

int main()
{

int n=8;
    
    int a=0,b=1,next=0;
    for(int i=0;i<n;i++)
  { 
  int a=0;
  int b=1;
  cout<<"1";
      for(int j=0;j<i;j++)
       { 
            next=a+b;
           a=b;
           b=next;
           cout << next;
       
       }
  cout<< "  " << endl;
  
  
  }
  
  
      return 0;
}