/*
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1

*/

#include<iostream>
using namespace std;
void numberCrown(int n) {
    int spaces = 2 * (n - 1);

    for (int i = 1; i <= n; i++) {
        // Left side numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Middle spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Right side numbers
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // Move to next line
        cout << endl;

        // Decrease space for next row
        spaces -= 2;
    }
}


int main(){
    int n;
    cin >> n;
    numberCrown(n);
}