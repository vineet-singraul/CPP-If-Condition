#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    if (x > y && x > z) {
        cout << "The largest number is: " << x << endl;
    }

    if (y > x && y > z) {
        cout << "The largest number is: " << y << endl;
    }

    if (z > x && z > y) {
        cout << "The largest number is: " << z << endl;
    }

    return 0;
}

