#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
  int reversearr[size];
  for(int i=0;i<size;i++)
  {
        reversearr[i]=arr[size-i-1];
  
  }
  
  for(int i=0;i<size;i++)
{

cout << "reverse arr"<<reversearr[i] << endl;
cout << "main"<<arr[i] << endl;


}
}

int main()
{
int arr[]={1,2,3,4,5};

int size=sizeof(arr)/sizeof(arr[0]);

   reverse(arr,size);
    cout << "Hello World!"<<size << endl;
    return 0;
}