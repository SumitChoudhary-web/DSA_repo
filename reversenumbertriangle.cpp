#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Outer loop for rows
    for(int i = n; i >= 1; i--) {
        
        // Inner loop for numbers
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl; // Move to next line
    }

    return 0;
}