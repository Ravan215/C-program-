#include<iostream>
using namespace std;
int b=1;
int main()
{
 int c=10;
 
 int a;
 cin>>a;
do{
      cout <<a<<b<<" "<<a*b<< endl;
      c--;
      b++;

}while(c>0);
    cout << "Hello World!" << endl;
    return 0;
}