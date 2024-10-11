#include<iostream>
using namespace std;

class demo{

public :
int x;

void fun()
{
cout << "inside function" << endl;

}

};

int main()
{

demo obj;
obj.x=10;
int demo:: *p=&demo::x;

cout << "x valur" << obj.x<<endl;
cout << "x using pontet" <<obj.*p<<endl;
  //  cout << "Hello World!" << endl;
    return 0;
}