/*

1
1 2
1 2 3

*/
#include<iostream>
#include<vector>
using namespace std;

void printl(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    printl(n);
}