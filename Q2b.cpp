#include <iostream>
using namespace std;

int main() {
    char input;

    cout << "Enter a character: ";
    cin >> input;

 if (isalpha(input)) {
        char lowercase = tolower(input);
        switch (lowercase) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout <<  "Vowel." << endl;
                break;
            default:
                cout << "Consonant." << endl;
        }
    } else {
        cout << "Error" << endl;
    }

    return 0;
}
