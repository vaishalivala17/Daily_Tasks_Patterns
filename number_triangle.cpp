#include <iostream>
using namespace std;

int main(){

    // Input : 3

    // 1    
    // 1 2
    // 1 2 3

    int n;
    cout << "Enter the number of rows for the number triangle: ";
    cin >> n;
    cout << endl;

    for(int i=1; i <=n ; i++) {
        for(int j=1; j <=i ; j++) {
            cout << j << " "; // Print numbers from 1 to i
        }
        cout << endl ;
    }


    return 0;
}