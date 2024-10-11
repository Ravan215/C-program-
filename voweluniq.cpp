#include <iostream>
#include <cctype>
 using namespace std;// For tolower function

int main() {
    char arr[10];
    int length = sizeof(arr) / sizeof(arr[0]);
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    char uniqueVowels[5]; // Array to store the unique vowels
    int count = 0;
    
    cout << "enter name=" << endl;
cin>>arr;
    // Outer loop to go through the vowels array
    for (int i = 0; i < 5; i++) {
        // Inner loop to check each element in the character array
        for (int j = 0; j < length; j++) {
            if (tolower(arr[j]) == vowels[i]) {
                uniqueVowels[count] = vowels[i]; // Save the vowel in uniqueVowels array
                count++;
                break; // Break to avoid counting the same vowel again
            }
        }
    }

    // Output the count of unique vowels
    cout << "Number of unique vowels: " << count <<endl;

    // Output the unique vowels
   cout << "Unique vowels: ";
    for (int i = 0; i < count; i++) {
        cout << uniqueVowels[i] << " ";
    }
    

    return 0;
}