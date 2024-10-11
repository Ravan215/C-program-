#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class dd
{
int no;
char name[50];
void input()
{
cout<<"\n Enter number:";
cin>>no;
}
public:
void display();
}s1;
void dd::display()
{
input();
cout<<"\n Square of number is: "<<no*no;
}
int  main()
{
clrscr();
dd s2;
s1.display();
s2.display();


return 0;
}