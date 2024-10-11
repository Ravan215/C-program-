#include<iostream>
using namespace std;

int main()
{
int a[]={1,2,3,4};

int i;
for(int i=0;i<4;i++)
  //  cout << "adress" <<&a[i]<< endl;
   // cout << "ad"<<a+i<<endl;
    //cout << "valur"<<a[i]<< endl;
    cout << "vakur"<<*(a+i) << endl;
   // cout << a+i<< endl;
    return 0;
}