#include <iostream>
using namespace std;

int main() {
    // Pattern A
    cout << "Pattern A\n";
    for (int i = 1; i <= 8; i++) {
        for (int j = 0; j < i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    // Pattern B
    cout << "\nPattern B\n";
    for (int i = 8; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}
