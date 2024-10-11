#include<iostream>
using namespace std;

int fact(int n)
{
     int factorial=1;
  for(int i=2;i<=n;i++)
  {
  
       factorial=factorial*i;
  
  }
  
  return factorial;
}

int main()
{
    int n,r,ans;
    
    cin >>n>>r;
    
    int a=fact(n);
    
    int b=fact(r);
    int c=fact(n-r);
    
    int d=a/(b*c);
    
    cout << " ans"<<d<< endl;
    
    ans=fact(n)/(fact(r)*fact(n-r));
    
    cout << "ans1 "<<ans<< endl;
    return 0;
}