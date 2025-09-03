/*

  *
 ***
*****
*****
 ***
  *

  */
#include<iostream>
using namespace std;
void print6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){ // this prints first spaces
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){ 
            /* this prints the stars as: for 0 index row(1st row) there are 1 star and 1 index row(second row) there are 3 stars
                so here the logic will be: 2 x row +1 =     stars in that particular row.
                ex: 3rd row means i=2 then 2*2+1=5 starts.
                thats why the logic is: 2*i+1
            */
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++){ // this prints last spaces, which are after stars.
            cout << " ";
        }
        cout << endl;
    }
}
void print7(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<i;j++){
            cout << " ";
        }
        for(int j=0; j< 2*(n-i)-1;j++){
            cout << "*";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print6(n);
    print7(n);
}