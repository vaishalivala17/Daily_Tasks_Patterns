#include<iostream>
using namespace std;

int main(){
    //   Diamond Pttern
    
    //  Input : 3
    //     *      
    //    ***
    //   *****
    //    ***
    //     *

    // Input the number of rows for the diamond
    int n ;

    cout << "Enter the number of rows for the diomond: ";
    cin >> n;  
    cout << endl;

    // Upper part of the diamond
    for(int i = 1; i <= n; i++) {
        // Print space
        for(int j = i; j < n; j++) {  // For row-1 : 2 spaces, row-2 : 1 spaces...row-n : 0 spaces
            cout << " ";
        }
        // Print stars
        for(int k = 1; k <= (2*i - 1); k++) { // 2*1 - 1 = 1, 2*2 - 1 = 3, 2*3 - 1 = 5...
            cout << "*";
        }cout << endl;
    }
    // Lower part of the diamond
    for(int i = n-1; i >= 1; i--) {
        // Print space
        for(int j = n; j > i; j--) {  // For row-n-1 : 1 space, row-n-2 : 2 spaces...row-1 : n-1 spaces
            cout << " ";
        }
        // Print stars
        for(int k = 1; k <= (2*i - 1); k++) { //  ...2*2 - 1 = 3 , 2*1 - 1 = 1
            cout << "*";
        }cout << endl;
    }
    
    return 0;
}
