#include <iostream>
using namespace std;

int main() {
    int rows, colms;
    cout << "Enter Number of rows:  ";
    cin >> rows;
    cout << "Enter Number of Columns:  ";
    cin >> colms;
    for (int i=1; i<=rows; i++) {
        for(int j=1; j<=colms; j++) {
            if(i==1 || i==rows || j==1 || j==colms) {
                cout << " * ";
            }
            else {
                cout << "   ";
            }    
        }
        cout << endl;
    }
    return 0;
}