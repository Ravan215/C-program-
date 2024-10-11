#include<iostream>
using namespace std;

class demo{

     public:
     
     int sum,rev,num,t;
     
     void palindrome(){
     
            rev=num%10;
            
            sum=(sum*10)+rev;
     
     
     }


};

int main()
{

    demo obj;
     obj.sum=0,obj.num=122,obj.rev=0;
     obj.t=obj.num;
    while(obj.num!=0)
    {
        
        obj.palindrome();
    
    obj.num/=10;
    }
    
    if(obj.t==obj.sum)
    {
    cout <<"palindrome"<<obj.sum<< endl;
    }
    else{
    
    cout << "not palindrome" << endl;
    }
    return 0;
}