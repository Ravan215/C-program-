#include <iostream>

using namespace std;

int main() {
    const int SIZE = 100;
    char arr[SIZE];
    bool found[5] = {false, false, false, false, false}; // For 'a', 'e', 'i', 'o', 'u'
    int count = 0;

    // Input the character array
    cout << "Enter characters (without spaces): ";
    cin >> arr;

    // Count unique vowels
    for (int i = 0; arr[i] != '\0'; i++) {
        char ch = tolower(arr[i]);

        if (ch == 'a') {
            if (found[0]) continue;
            found[0] = true;
            count++;
            cout <<ch<<" "<< endl;
        } else if (ch == 'e') {
            if (found[1]) continue;
            found[1] = true;
            count++;
            cout <<ch<<" "<< endl;
        } else if (ch == 'i') {
            if (found[2]) continue;
            found[2] = true;
            count++;
           cout <<ch<<" "<< endl;
        } else if (ch == 'o') {
            if (found[3]) continue;
            found[3] = true;
            count++;
           cout <<ch<<" "<< endl;
        } else if (ch == 'u') {
            if (found[4]) continue;
            found[4] = true;
            count++;
           cout <<ch<<" "<< endl;
        }
    }

    // Output the result
    cout << "Number of unique vowels: " << count << endl;

    return 0;
}