/*
1
2 3
4 5 6
*/
#include<iostream>
using namespace std;
void nNumberTriangle(int n) {
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << k << " ";
            k=k+1;
        }
        cout << endl;
    }    
}
int main(){
    int n;
    cin >> n;
    nNumberTriangle(n);
}