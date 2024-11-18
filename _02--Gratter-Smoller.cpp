#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << "The first number is greater." << endl;
    }

    if (a < b) {
        cout << "The second number is greater." << endl;
    }

    if (a == b) {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}
