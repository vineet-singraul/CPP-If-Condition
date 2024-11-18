#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is an uppercase letter." << endl;
    }

    if (ch >= 'a' && ch <= 'z') {
        cout << "The character is a lowercase letter." << endl;
    }

    if (ch >= '0' && ch <= '9') {
        cout << "The character is a digit." << endl;
    }

    if (!(ch >= 'A' && ch <= 'Z') && !(ch >= 'a' && ch <= 'z') && !(ch >= '0' && ch <= '9')) {
        cout << "The character is a special symbol." << endl;
    }

    return 0;
}
