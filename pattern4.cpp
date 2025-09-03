/*

1
2 2
3 3 3
4 4 4 4

*/
#include<iostream>
using namespace std;
void printl(int n){
    for (int i=1;i<=n;i++){  //no.of rows
        for(int j=1;j<=i;j++){ // inner loop is for columns and how they connect to rows.
            cout << i << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    printl(n);
}