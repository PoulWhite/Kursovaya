#include <iostream>
using namespace std;
int main() {
    // Prompt user to enter the character for the square
    char symbol;
    cout << "Enter the character for the square: ";
    cin >> symbol;

    // Prompt user to enter the size of the square
    int size;
    cout << "Enter the size of the square: ";
    cin >> size;

    // Print the top and bottom rows of the square
    for (int i = 0; i < size; i++) {
        cout << symbol;
    }
    cout << endl;

    // Print the middle rows of the square
    for (int i = 0; i < size - 2; i++) {
        cout << symbol;
        for (int j = 1; j < size - 1; j++) {
            cout << " ";
        }
        cout << symbol;
        cout << endl;
    }

    // Print the last row of the square
    for (int i = 0; i < size; i++) {
        cout << symbol;
    }
    cout << endl;

    return 0;
}