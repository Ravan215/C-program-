#include <iostream>
#include <cstring>  // For strlen function

int main() {
    const int SIZE = 100;
    char word[SIZE];

    std::cout << "Enter a word: ";
    std::cin >> word;

    int length = strlen(word);
    bool isPalindrome = true;
 std::cout << length;
    // Check if the word is a palindrome using a for loop
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            isPalindrome = false;
            break;  // No need to check further if a mismatch is found
        }
    }

    if (isPalindrome) {
        std::cout << word << " is a palindrome." << std::endl;
    } else {
        std::cout << word << " is not a palindrome." << std::endl;
    }

    return 0;
}