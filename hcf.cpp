#include<iostream>
using namespace std;

int main()
{
    int a,b,hcf,r;
    cout << "entr two numbers" << endl;
    
    cin >>a>>b;
    
    
    
    
    while(true)
    {
    
    hcf=b;
          r=a%b;
          
          a=b;
          
          b=r;
    
    if(b==0)
    {
       break;
    
    }
    }
    
    cout << "hcf" <<hcf<<endl;
    return 0;
}