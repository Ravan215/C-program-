#include<iostream>
using namespace std;

int maxsum(int arr[],int size)
{
   int maxsum=INT_MIN;
   int sum=0;
   
   for(int i=0;i<size;i++)
   {
        sum+=arr[i];
      if(maxsum<sum)
      {
           maxsum=sum;
      
      }
     if(sum<0)
   {
   
   sum=0;
   
   }
   }

return maxsum;

}

int main()
{

int arr[]={1,1,1,1,10};
int n=sizeof(arr)/sizeof(arr[0]);

int max=maxsum(arr,n);
    cout << "max sum"<<max<< endl;
    return 0;
}