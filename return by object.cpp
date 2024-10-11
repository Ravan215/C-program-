#include<iostream>
using namespace std;

#include<conio.h>
class a
{
int x,y,z;
public:
void input()
{
cout<<endl<<"Enter Three Value..";
cin>>x>>y>>z;
}
void output()
{
cout<<endl<<"x: "<<x<<"\ty: "<<y<<"\tz: "<<z;
}
a add(a a1)
{
a a2;
a2.x=a1.x+a1.y+a1.z;
return a2;
}
};
int main()
{
a a1,a2;
clrscr();
cout << "input call" << endl;
a1.input();
cout << "output call" << endl;
a1.output();
cout << "return object a2 and a1" << endl;
a2=a2.add(a1);
cout << "output" << endl;
a2.output();
return 0;
getch();
}