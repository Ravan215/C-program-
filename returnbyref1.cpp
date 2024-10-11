#include<iostream>




int& getStaticVar() {
    static int staticVar = 100;
    return staticVar;
}

int main() {
    int& ref = getStaticVar();
    ref = 200;
    std::cout << "Static variable: " << getStaticVar() << std::endl;
    return 0;
}