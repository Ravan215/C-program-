#include<iostream>
#include<string.h>
using namespace std;

int main()
{

string str=" dipak";
string abc(str);

string s1="dipak";
string s2="makvana";

  cout << s1.append(s2) << endl;
  cout <<s1+s2<< endl;
  s1.assign("data");
  cout << s1 << endl;
  cout <<s1.at(2)<< endl;
  cout << "return particularly character--"<<s1[2] << endl;
  //return empty string 
  s1.clear();
  cout <<  s1<< endl;
  cout <<s1.compare(s2)<< endl;
  if(s1.empty())
  cout << "empty" << endl;
  
  s2.erase(2,4);
  cout << s2 << endl;
  
  
  
    return 0;
}
    