#include<iostream>
using namespace std;

int main()
{

int a,b,r,lcm;

cout << "inter value =" << endl;

cin >>a>>b;

     while(true)
     {
         lcm=a;
         r=a%b;
         
         if(r==0)
            {
            break;
            
            }
            
            a*=2;
     }
    cout << "lcm="<<lcm<< endl;
    return 0;
}