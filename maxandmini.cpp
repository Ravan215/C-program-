#include<iostream>
using namespace std;

int minimum(int arr[],int n){

int mini=INT_MAX;

for(int i=0;i<n;i++)
{
      if(arr[i]<mini)
      {
          mini=arr[i];
      
      }
  

}

return mini;
}

int maximum(int arr[],int n)
{
     int max=INT_MIN;
     
     for(int i=0;i<n;i++)
{
     if(arr[i]>max)
     {
        max=arr[i];
     
     
     }


}
return max;

}


int main()
{

int arr[]={1,2,3,4,5};

int n=5;

  int mini=minimum(arr,n);
  int max=maximum(arr,n);
  cout << "minimum"<<mini << endl;
  cout <<"maximum"<<max<< endl;
    return 0;
}