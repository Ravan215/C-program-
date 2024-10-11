#include <iostream>

using namespace std;

int main() {
    const int SIZE = 100;
    char str[SIZE];
    int length = 0;
    bool isPalindrome = true;

    // Input the string
    cout << "Enter a string: ";
    cin >> str;

    // Calculate the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // Check if the string is a palindrome
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    // Output the result
    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}