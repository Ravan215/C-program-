#include<iostream>
using namespace std;

int binarysearch(int arr[],int n)
{
   int f=0;
   int l=n;
   int temp;
   for(int i=0;i<n-1;i++)
   {
   
   for(int j=i+1;j<n;j++)
   {
      if(arr[j]<arr[i])
      {
          
          
          temp=arr[j];
          arr[j]=arr[i];
          arr[i]=temp;
      }
   
   
   }
}
}

int main()
{
int n;

cout << "size" << endl;
cin>>n;

cout << "value" << endl;
int arr[n];

for(int i=0;i<n;i++)
{
     cin >>arr[i];


}

cout << "unsorted" << endl;
  binarysearch(arr,n);
  
  cout << "sorted" << endl;
  for(int a=0;a<n;a++)
{
     cout << "arr" <<arr[a]<<endl;

}

    return 0;
}