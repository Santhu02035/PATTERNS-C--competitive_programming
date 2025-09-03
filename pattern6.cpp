/*

  *
 ***
*****

*/

// the above pattern have 7 rows. That means outer loop have 'n' rows.
//the code will have three inner lopps. [spaces,start,spaces]
// i is outer one three j's are inner loops.
//first inner loop is for -> spaces
// second inner loop is for -> starts
//third inner loop is for -> spaces

/*by looking at the pattern we can say that:
1st row=[2,1,2] that means 4 spaces, a star and 4 spaces again.alignas
2nd row=[1,3,1]
3rd row=[0,5,0]
*/
#include<iostream>
using namespace std;
void printl(int n){
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
int main(){
    int n;
    cin >> n;
    printl(n);
}