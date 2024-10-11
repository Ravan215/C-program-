#include<iostream>
using namespace std;

int main()
{
int a,*b;

    cout << "entervalue of a =" << endl;
    cin >>a;
    
    b=&a;
    cout << "value of a=" <<a<<endl;
    cout << "value of b" <<*b<<endl;
    return 0;
}