/*

1
2 3
4 5 6
7 8 9 10

*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 1; // Initialize count to 1
    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= row) {
            cout << count << " "; // Print count followed by a space
            count++; // Increment count for the next number
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
