// #include<iostream>
// using namespace std;
// int main()
// {
//     int row =6, col=6;
//     for (int i=0; i<row; i++){
//         for(int j=0; j<i; j++){
//             cout<<" * ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = n; j > i; --j) {
            cout << "  ";
        }
        // Print asterisks
        for (int k = 1; k <= i; ++k) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}