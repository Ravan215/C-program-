#include<iostream>
using namespace std;
int dub(int arr[],int n)
{

for(int i=0;i<5;i++)
{ 

for(int j=i+1;i<5;j++){
    if(arr[i]==arr[i+1])
    {
    
      cout << "s bahi" << endl;
      
      
      return true;
    }
  //cout << "ar"<<arr[i]<< endl;
return false;
}
}


}
int main()
{
int arr[5]={1,11,2,4,5};
int n=5;
//sort(arr.begin(),arr.end());
  cout <<dub(arr,n)<< endl;

    cout << "Hello World!" << endl;
    return 0;
}