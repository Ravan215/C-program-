#include<iostream>
using namespace std;

int main()
{
int a;

    cout << "enter value of a="<< endl;
    cin >>a;
    
    int &b=a;
    cout << "value of  a=" <<a<<endl;
    cout << "value of b="<<b<< endl;
    return 0;
}