#include<iostream>
using namespace std;

int main(){
    // Pyramid Pattern

    //  Input : 5
    //     *
    //    ***
    //   *****
    //  *******
    // *********

    // Input the number of rows for the pyramid
    int n ;

    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;  
    cout << endl;
    
    for(int i = 1; i <= n; i++) {
        // Print space

        for(int j = i; j < n; j++) {  // For row-1 : 4 spaces, row-2 : 3 spaces...row-5 : 0 spaces
            cout << " ";
        }
        // Print stars
        for(int k = 1; k <= (2*i - 1); k++) { // 2*1 - 1 = 1, 2*2 - 1 = 3...
            cout << "*";
        }cout << endl;
    }
    return 0;
}
