/*

* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 

*/
#include<iostream>
using namespace std;
void symmetry(int n) {
    int iniS = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }

        for (int j = 0; j < iniS; j++) {
            cout << "  ";
        }

        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }

        iniS += 2;
        cout << endl;
    }

    iniS -= 2;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }

        for (int j = 0; j < iniS; j++) {
            cout << "  ";
        }

        for (int j = 0; j < i; j++) {
            cout << "* ";
        }

        iniS -= 2;
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    symmetry(n);
}