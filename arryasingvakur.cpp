#include<iostream>
using namespace std;


class sum{

   int sum[5];
   
   public:
   void input(int a,int i)
{  
  //cout <<a<<i << endl;
     this->sum[i]=a;
    // cout << "arr" <<sum<< endl;
}
void output()
{
   for(int i=0;i<5;i++)
   {
           cout<<sum[i]<<endl;
   }
cout << "arr"<<sum<< endl;


}



};

int main()
{

   sum o;
   int a;
   for(int i=0;i<5;i++)
   {
      int a;
      cout << "entr value array value=" << endl;
      cin >>a;
   o.input(a,i);

   
   }
      o.output();
   
    return 0;
}