#include<iostream>
using namespace std;

int main()
{
int n=4;
int arr[4][4]={{1,2,2,2},
                {5,5,3,4},
                {1,2,3,4},
               { 1,2,3,4}};
               
               int sum=0,sum2=0;
               
               for(int i=0;i<n;i++){
               
                   sum+=arr[i][i];
                   sum2+=arr[i][n-i-1];
               }
               
               cout <<sum<<sum2<< endl;
    cout << "Hello World!" << endl;
    return 0;
}