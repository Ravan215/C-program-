#include<iostream>
#include<cmath>
using namespace std;

class NumberOperations {
public:
    void switchCase(int choice, int num) {
        switch (choice) {
            case 1: isArmstrong(num);
               /*if (isArmstrong(num))
                    cout << num << " is an Armstrong number.\n";
                else
                    cout << num << " is not an Armstrong number.\n";*/
                break;
            case 2:
                printFibonacci(num);
                break;
            case 3:
                cout << "Factorial of " << num << " is " << factorial(num) << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

private:
   void isArmstrong(int num) {
        int sum = 0, temp = num, rem= 0;
        /*while (temp > 0) {
            temp /= 10;
            digits++;
        }*/
        temp = num;
        while (temp > 0) {
           rem= temp%10;
            sum=sum+(rem*rem*rem);
            temp /= 10;
        }
        
      //return sum == num;
      
      if(num==sum)
      {
      cout << "isArmstrong" << endl;
      }
      else
      {
      cout << "not arm" << endl;
      
      }
    }

    void printFibonacci(int n) {
        int a = 0, b = 1, next;
        cout << "Fibonacci Series: ";
        for (int i = 1; i <= n; i++) {
            cout << a << " ";
            next = a + b;
            a = b;
            b = next;
        }
        cout << endl;
    }

    int factorial(int num) {
        int fact = 1;
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        return fact;
    }
};

int main() {
    NumberOperations obj;
    int choice, num;
    cout << "Enter your choice (1: Armstrong, 2: Fibonacci, 3: Factorial): ";
    cin >> choice;
    cout << "Enter a number: ";
    cin >> num;
    obj.switchCase(choice, num);
    return 0;
}