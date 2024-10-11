#include<iostream>
#include<conio.h>
using namespace std;

int arr[5];


int &fun(int i)
{
  return arr[i];

}
int main()
{
  int a,b,d=-1;
  char c;
  
  do{
        
        clrscr();
        
        cout << "enter index number" << endl;
        cin>>a;
        if(arr[a]!=0)
        {
        
        cout << "allred filled" << endl;
        
        }
        else
        {
             if(a<0||a>4)
             {
             cout << "invalid choice" << endl;
             }
             
             else{
                    d++;
                    
                    cout << "enter value" << endl;
                   cin >>b;
                   
                   fun(a)=b;
                   
                   if(d==4)
                   {
                   
                   cout << "array is over flow" << endl;
                   
                   break;
                   
                   }
             
             
                }
        
        }
  
     cout << "do you want to continue" << endl;
     
     cin>>c;
  }while(c== 'y' && c=='y' );
  
  for(int i=0;i<5;i++)
  {
  
     cout << "value of arr"<<arr[i]<< endl;
  }

    return 0;
}