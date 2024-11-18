#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    }

    if (number < 0) {
        cout << "The number is negative." << endl;
    }

    if (number == 0) {
        cout << "The number is zero." << endl;
    }

    return 0;
}
