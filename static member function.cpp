#include<iostream>
using namespace std;

class test
{
static int count;
int num;
public:
void setdata(int n)
{
num=n;
count++;
}
static void display()
{
cout<<endl<<"Value of static variable: "<<count;
}
void dispnum()
{
cout<<endl<<"Value of number is: "<<num;
}
};
int test::count;
int main()
{
//clrscr();
test t1,t2,t3;
test::display();
t1.setdata(10);
test::display();
t1.dispnum();
t2.setdata(20);
test::display();
t2.dispnum();
t3.setdata(30);
test::display();
t3.dispnum();
return 0;

}