#include<iostream>
using namespace std;
int decimal(int num)
{
     int ans=0,pow=1,rev;
     while(num!=0)
{
        rev=num%10;
        
        ans+=rev*pow;

     pow=pow*2;
     
     num=num/10;

}
return ans;
}
int main()
{
     cout << "ans" <<decimal(11000)<< endl;
    return 0;
}