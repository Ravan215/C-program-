#include <iostream>

using namespace std;

int main() {
    const int SIZE = 100;
    char str[SIZE];
    int length = 0;

    // Input the string
    cout << "Enter a string: ";
    cin >> str;

    // Calculate the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (int i = 0; i <length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i-1];
        str[length - i-1 ] = temp;
    }

    // Output the reversed string
    cout << "Reversed string: " << str << endl;


cout << "" <<5/2<< endl;
    return 0;
}